#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Antrian
{
private:
     vector<string> data;
     int depan, belakang;
     int maksElemen;
     public:
     // konstruktor
     Antrian (int ukuran)
     {
         depan = 0;
         belakang = 0;
         maksElemen = ukuran;
         data.resize (ukuran); // ukuran vector

     }
     // Memasukkan data ke antrian
     // nilai balik tidak ada
     void insert (string x)
     {
         int posisiBelakang;
         // Geser belakang ke posisi berikutnya
         if (belakang == maksElemen)
         posisiBelakang = 1;
         else
            posisiBelakang = belakang + 1;

            // Cek belakang apa sama dengan Depan
            if (posisiBelakang == depan)
            cout  << "Antrian penuh" << endl;
            else
            {
                belakang = posisiBelakang;

                // Masukkan data
                data[belakang] = x;
            }
     }

     string remove(void)
     {
         if (empty())
         {
         cout << "Antrian kosong" << endl;
         return "";
     }
     if (depan == maksElemen)
         depan = 1;
         else
         depan = depan + 1;

         return data[depan];
     }

     bool empty(void)
     {
         if (depan == belakang)
             return true;
             else
             return false;
     }

};
 int main ()
 {
     int ukuran = 10;
    Antrian daftar (ukuran);


    daftar.insert("Aminudin");
    daftar.insert("Zaskia");
    daftar.insert("Rina Melati");
    daftar.insert("Farhan");
    daftar.insert("Agens Monica");

    while (! daftar.empty())
    {
        string nama = daftar.remove();
        cout << nama << endl;
    }
    return 0;
 }
