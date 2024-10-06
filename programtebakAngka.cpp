#include <iostream>
using namespace std;

int getUserGuess() {
    int angka;
    cout << "Saya  : Angkanya adalah = ";
    cin >> angka;

    
    while (angka < 1 || angka > 25) {
        cout << "\n\t SALAH ! Masukkan angka antara 1 dan 25.\n";
        cout << "Saya  : Angkanya adalah = ";
        cin >> angka;
    }
    
    return angka;
}


void playGame() {
    int angka, t, n = 0;
    
    
    t = 1 + rand() % 25; 

    cout << "\t Program Tebak Angka 1-25 \n\n";
    cout << "Computer: Saya Memikirkan sebuah Angka 1-25\n";
    cout << "Computer: Angka Apakah itu? \n\n";

    do {
        n++;
        angka = getUserGuess();
        
        if (angka < t) {
            cout << "\n\t SALAH ! Angkanya Terlalu Kecil \n\n";
        } else if (angka > t) {
            cout << "\n\t SALAH ! Angka Terlalu Besar \n\n";
        }
    } while (angka != t);
    
    cout << "\n\t BENAR ! Anda Telah Menebak Sebanyak " << n << " Kali\n"; 
}

int main() {
    srand(time(0)); 
    playGame(); 
    return 0;
}
