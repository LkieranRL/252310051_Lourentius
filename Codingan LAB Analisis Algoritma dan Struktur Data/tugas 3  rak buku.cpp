#include <iostream>
using namespace std;

struct Buku {
    string judul;
    string rak;
};

int binarySearch(Buku data[], int n, string cari) {
    int kiri = 0;
    int kanan = n - 1;

    while (kiri <= kanan) {
        int mid = (kiri + kanan) / 2;

        if (data[mid].judul == cari) {
            return mid;
        } else if (data[mid].judul < cari) {
            kiri = mid + 1;
        } else {
            kanan = mid - 1;
        }
    }

    return -1; 
}

int main() {
    Buku data[] = {
        {"Algoritma", "Rak A1"},
        {"Basis Data", "Rak B2"},
        {"Jaringan Komputer", "Rak C3"},
        {"Pemrograman C++", "Rak D4"},
        {"Struktur Data", "Rak E5"}
    };

    int n = sizeof(data) / sizeof(data[0]);
    string cari;

    cout << "Masukkan judul buku: ";
    getline(cin, cari);

    int hasil = binarySearch(data, n, cari);

    if (hasil != -1) {
        cout << "Buku ditemukan di " << data[hasil].rak << endl;
    } else {
        cout << "Buku tidak ditemukan" << endl;
    }

    return 0;
}
