#include <iostream>
#include <string>
using namespace std;
class Orang
{
private:
    string nama;
    string jenisKelamin;
public:
    //konstuktor
    Orang (string nama, string jenisKelamin)
    {
        Orang::nama = nama;
        Orang::jenisKelamin = jenisKelamin;
    }

    void infoorang(void)
    {
        cout<<"Nama          : "
            <<nama<<endl;
        cout<<"Jenis Kelamin : "
            <<jenisKelamin<<ends;
    }

    string perolehnama (void)
    {
        return nama;
    }

    string perolehkelamin (void)
    {
        return jenisKelamin;
    }
};

class Pegawai : Orang
{
private :
    string nip;
public :
    //Konstruktor
    Pegawai (string nip, string nama, string jenisKelamin):
        Orang (nama, jenisKelamin)
    {
        Pegawai: :nip = nip;
    }

    void infoPegawai (void)
    {
        cout<<"Pegawai" << endl;
        cout<<"NIP       : "
            <<nip<<endl;
        infoorang();
    }
};

int main()
{
    Orang siX("Rian","Pria");
    siX.infoorang();
    cout<<"__________________" <<endl;

    Pegawai sekretaris ("12345","Andhien","Wanita");
    sekretaris.infoPegawai();

    return 0;
}
