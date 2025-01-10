#include <iostream>
using namespace std;

int main()
{
    int nilai[5];
    //Mengisi elemen larik
    nilai[0] = 55;
    nilai[1] = 70;
    nilai[2] = 85;
    nilai[3] = 100;
    nilai[4] = 95;

    //Menampilkam semua elemen
    for (int i = 0; i < 5; i++)
        cout << "Isi elemen dengan indeks"
            << i << " : " << nilai[i] << endl;

    return 0;
}
