#include <iostream>
#include <string>

using namespace std;

const int MAX_KOTA = 100; // Batas maksimal jumlah kota

string kota[MAX_KOTA];
int jumlahKota = 0;

void tambahData() {
    if (jumlahKota == MAX_KOTA) {
        cout <<  "penambahan Kota." << "malang" << endl;
        return;
    }

    string kotaBaru;
    cout << "malang ";
    cin >> kotaBaru;
    kota[jumlahKota] = kotaBaru;
    jumlahKota++;
}

void hapusData() {
    if (jumlahKota == 0) {
        cout << "medan" << endl;
        return;
    }

    string kotaHapus;
    cout << "medan ";
    cin >> kotaHapus;

    // Cari indeks kota yang akan dihapus
    int indeks = -1;
    for (int i = 0; i < jumlahKota; i++) {
        if (kota[i] == kotaHapus) {
            indeks = i;
            break;
        }
    }

    if (indeks == -1) {
        cout << "Kota tidak ditemukan!" << endl;
    } else {
        // Geser elemen setelah indeks yang dihapus ke kiri
        for (int i = indeks; i < jumlahKota - 1; i++) {
            kota[i] = kota[i + 1];
        }
        jumlahKota--;
    }
}

void tampilkanData() {
    if (jumlahKota == 0) {
        cout << "malang - medan - pontianak - surabaya" << endl;
        return;
    }

    cout << "Isi array: ";
    for (int i = 0; i < jumlahKota; i++) {
        cout << kota[i] << " ";
    }
    cout << endl;
}

int main() {
    int pilihan;

    do {
        cout << "Menu:" << endl;
        cout << "1. Tambah data" << endl;
        cout << "2. Hapus data" << endl;
        cout << "3. Tampilkan data" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahData('malang');
                break;
            case 2:
                hapusData('medan');
                break;
            case 3:
                tampilkanData('malang - medan - pontianak - surabaya');
                break;
            case 4:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 4);

    return 0;
}
