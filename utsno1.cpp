#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system("CLS");
    int n;
    string ulang;

    cout << "Jumlah Baris? ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Anda memasukkan jumlah Genap. Masukkan hanya jumlah Ganjil" << endl;
    }
    else
    {
        cout << "Bintang(" << n << ")" << endl;

        for (int i = 1; i <= n; i++)
        {
            if (i != n / 2 + 1)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j == n / 2 + 1)
                    {
                        cout << "*";
                    }
                    cout << " ";
                }
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << "*";
                }
            }
            printf("\n");
        }
    }

    cout << endl
         << "Apakah anda ingin mengulang Program(Y / N) : ";
    cin >> ulang;

    if (ulang == "y" || ulang == "Y")
    {
        return main();
    }
    else
    {
        cout << "Terima kasih telah menggunakan Progam ini.";
        return 0;
    }
}