#include <iostream>
#include <string>

using namespace std;

class simpul
{
public:
    string kode;
    string nama;
    simpul* berikut;

    // konstruktor
    simpul (string xkode, string xnama)
    {
        kode = xkode;
        nama = xnama;
        berikut = NULL;
    }

    void display()
    {
        cout << kode << " : "
             << nama << endl;
    }
};

class senaraiberantai
{
private:
    simpul* pertama;
public:
    // konstruktor
    senaraiberantai()
    {
        pertama = NULL;
    }

    //Destruktor
    ~senaraiberantai()
    {
        //menghapus semua simpul
        simpul* penunjukhapus;
        while (pertama != NULL)
        {
            penunjukhapus = pertama->berikut;
            delete penunjukhapus;
        }

    }

    //memasukan data ke senarai berantai
    //    Nilai balik tidak ada
    void insert (string kode, string nama)

    {
        simpul* ptrBaru;

        ptrBaru = new simpul (kode, nama);
        ptrBaru->berikut = pertama;
        pertama = ptrBaru;
    }

    //mencari data
    //   nilai balik berupa true kalau yang dicari ketemu
    //   Dalam hal ini, pendahulu merupakan simpul yang
    //   terletak di depan simpul yang di cari
    bool find(simpul* &pendahulu, simpul* &posisiData, string x)
    {
        posisiData = pertama;
        pendahulu = NULL;
        bool ditemukan = false;
        while (posisiData !=NULL)
        {
            string kode = posisiData->kode;
            if (kode.compare(x) == 0)
            {
                ditemukan = true;
                break; // keluar dari while
            }

            pendahulu = posisiData;
            posisiData = posisiData->berikut;
        }

        return ditemukan;
    }

    //mencari data
    //    nilai balik berupa NULL kalau yang di cari tdadk ketemu
    simpul* find(string x)
    {
        simpul* pendahulu;
        simpul* posisiData;
        bool ditemukan = find (pendahulu, posisiData, x);
        if (! ditemukan)
            return NULL;
        else
            return posisiData;
    }

    //menghapus simpul yang berisi kode x
    //    nilai balik berupa :
    //       - true kalau data berhasil di hapus
    //       - false kalau dsta tidak ada
    bool remove(string x)
    {
        simpul* pendahulu;
        simpul* posisiData;
        bool ditemukan =find(pendahulu, posisiData, x);
        if (! ditemukan)
        {
            cout << "data yang akan dihapus tidak ditemukan."
                 <<endl;
                 return false;
        }

        if (pendahulu== NULL)
        {
            // Data yang dihapus ditunjuk oleh pertama
            pertama=pertama->berikut;
                delete posisiData;
        }
        else
        {
            //datayang di hapus tidak ditunjuk oleh pertama
            pendahulu->berikut = posisiData->berikut;
            delete posisiData;
        }
    }

    //Menampilkan data
    void display(void)
    {
        cout << "isi senarai berantai:" << endl;

        simpul* penunjuk = pertama;
        while  (penunjuk != NULL)
        {
            penunjuk->display();
            penunjuk = penunjuk->berikut;
        }
    }
};

int main()
{
    senaraiberantai senarai;

    // Memasukan 5 buah nama
    senarai.insert("AMN", "aminudin");
    senarai.insert("ZAS", "zaskia");
    senarai.insert("RIN", "Rina melati");
    senarai.insert("FAR", "farhan");
    senarai.insert("AGN", "agnes Monica");

    cout << "keadaan awal:" << endl;
    senarai.display();

    senarai.remove("RIN");

    cout << endl;
    cout << "setelah RIN dihapus:" << endl;
    senarai.display();

    // cari RIN
    string dicari = "RIN";
    cout << endl;
    cout << "pencarian " << dicari <<endl;
    simpul*  posisiData = senarai.find(dicari);
    if (posisiData == NULL)
       cout << dicari << " tidak ditemukan." << endl;
    else
    {
        cout <<"hasil pencarian:" << endl;
        posisiData->display();
    }

    //cari FAR
    dicari = "FAR";
    cout << endl;
    cout << "pencarian" << dicari << endl;
    posisiData = senarai .find (dicari);
    if (posisiData == NULL)
       cout << "tidak ditemukan." << endl;
    else
    {
        cout << "Hasil pencarian:" << endl;
        posisiData->display();
    }

    return 0;

}
