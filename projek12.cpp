#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tumpukan
{
private:
   vector<string> tumpukan;
   int puncak;
public:
    // konstruktor
    Tumpukan(int ukuran) : puncak(-1)
    {
        tumpukan.resize(ukuran); // ukuran vector
    }

//memasukan data ke Tumpukan
//  Nilai balik berupa false
//  kalau tumpukan sudah penuh
bool push(string data)
{
    //periksa kalau tumpukan penuh
    if (puncak == (tumpukan.size()-1))
return false;

    //masukan data ke tumpukan
    puncak++;
    tumpukan[puncak] = data;
 }

     string pop(void)
 {
     if (! empty())
         return tumpukan [puncak--];
         else
         return ""; // string kosong menyatakan
         //tumpukan sudah habis

 }

 bool empty(void)
 {
     return (puncak == -1);
 }

 };

 int main ()
{
     int ukuran = 10;
     Tumpukan stack(ukuran); //buat objek

     //masukan lima buah nama
     stack.push("edi");
     stack.push("yoga");
     stack.push("nova");
     stack.push("hetty");
     stack.push("melia");
     stack.push("dody");
     //kosongkan isi isi tumpukan dan tampilkan
     while (! stack.empty())
     {
         string nama = stack.pop();
         cout << nama << endl;

     }

     return 0;

}
