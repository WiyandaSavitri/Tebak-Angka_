#include <iostream>
using namespace std;

int main(){
    
   int angka, t, n = 0;
    
    // angka = Angka yang ditebak user
    // t     = Angka Pilihan Computer
    // n     = Berapa Kali User Menebak
    
    srand (time(NULL));
    t = rand() % 10 + 1;
    cout << "\t Program Tebak Angka 1-25 \n\n";
    
    cout << "Computer : Saya Memikirkan sebuah Angka 1-25\n";
    cout << "Computer : Angka Apakah itu ? \n\n";
    
    do{
        n++;
        cout << "Saya  : Angkanya adalah = ";
        cin >> angka ;
        
        if (angka < t){
            
            cout << "\n\t SALAH ! Angkanya Terlalu Kecil \n\n";
        }
        else if (angka > t){
            
            cout << "\n\t SALAH ! Angka Terlalu Besar \n\n";
        }
    } while (angka != t);
    
    cout << "\n\t BENAR ! Anda Telah Menebak Sebanyak "<< n <<" Kali"; 

    return 0;
}
