#include <iostream>
#include <stdlib.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main(){
    system("CLS");
    int angka;
    string ulang;
    bool prima = true;

    cout << "Masukan angka: ";
    cin >> angka;

    cout << "\nAngka " << angka << " termasuk bilangan: " << endl;
    if (angka >= 0 ){
        cout << "* Positif \n";
        if (angka != 0 || angka != 1)
        {
            for (int i = 2; i <= angka / 2; ++i)
            {
                if (angka % i == 0)
                {
                    prima = false;
                    break;
                }
            }
        }

        if (prima == true){
            cout << "* Prima\n";
        }

    } else{
        cout << "* Negatif \n";
    }

    if (angka % 2 == 0)
    {
        cout << "* Genap \n";
    } else {
        cout << "* Ganjil \n";
    }


    //Ulang program
    cout << endl
         << "Apakah anda ingin mengecheck angka lagi (Y/N): ";
    cin >> ulang;

    if (ulang == "y" || ulang == "Y")
    {
        return main();
    }
    else
    {
        cout << "Terima kasih telah menggunakan program ini.";
        Sleep(5000);
        return 0;
    }
}