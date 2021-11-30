#include <iostream>
#include <stdlib.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main()
{
    system("CLS");
    int n;
    string ulang, uang;

    cout << "Silahkan pilih (1-3) jumlah uang yang akan anda ambil : \n";
    cout << "1. 100.000 \n2. 250.000 \n3. 500.000\n";
    cout << "Pilihan: ";
    cin >> n;

    if (n == 1){
        uang = "100.000";
    } else if (n == 2) {
        uang = "250.000";
    } else if (n == 3) {
        uang = "500.000";
    } else {
        cout << "Pilihan anda salah, silahkan pilih 1 - 3.";
        Sleep(1000);
        return main();
    }

    cout << endl << "Silahkan ambil uang " << uang << " anda";
    cout << endl
         << "Apakah anda ingin melakukan transaksi lagi (Y/N): ";
    cin >> ulang;

    if (ulang == "y" || ulang == "Y")
    {
        return main();
    }
    else
    {
        cout << "Terima kasih telah menggunakan ATM ini.";
        Sleep(5000);
        return 0;
    }
}