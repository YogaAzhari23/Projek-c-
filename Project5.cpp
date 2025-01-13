#include <iostream>
#include <string>
using namespace std;

struct RekamanBuku
{
    string judul;
    string pengarang;
    int jumlah;
};

int main()
{
    struct RekamanBuku *novel, buku;
    //Isi data buku
    buku.judul = "Sabar dan ikhlas agar di rahmati allah";
    buku.pengarang = "Marga T.";
    buku.jumlah = 1;

    //variabel pointer novel
    // diatur menunjuk ke variabel buku
    novel = &buku;

    // Mengakses data melalui variabel pointer novel
    cout << "Judul     : " << novel->judul << endl;
    cout << "Pengarang : " << novel->pengarang << endl;
    cout << "Jumlah    : " << novel->jumlah << endl;

    return 0;
}
