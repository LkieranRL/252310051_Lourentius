#include <iostream>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    string penerbit;
    int tahunTerbit;
};

int main() {
    Buku buku1, buku2;

    cout << "Masukkan data Buku 1" << endl;
    cout << "Judul       : ";
    getline(cin, buku1.judul);
    cout << "Penulis     : ";
    getline(cin, buku1.penulis);
    cout << "Penerbit    : ";
    getline(cin, buku1.penerbit);
    cout << "Tahun Terbit: ";
    cin >> buku1.tahunTerbit;

    cout << endl;

    cout << "Masukkan data Buku 2" << endl;
    cout << "Judul       : ";
    getline(cin, buku2.judul);
    cout << "Penulis     : ";
    getline(cin, buku2.penulis);
    cout << "Penerbit    : ";
    getline(cin, buku2.penerbit);
    cout << "Tahun Terbit: ";
    cin >> buku2.tahunTerbit;

    cout << "\n===== DATA BUKU =====" << endl;

    cout << "\nBuku 1" << endl;
    cout << "Judul       : " << buku1.judul << endl;
    cout << "Penulis     : " << buku1.penulis << endl;
    cout << "Penerbit    : " << buku1.penerbit << endl;
    cout << "Tahun Terbit: " << buku1.tahunTerbit << endl;

    cout << "\nBuku 2" << endl;
    cout << "Judul       : " << buku2.judul << endl;
    cout << "Penulis     : " << buku2.penulis << endl;
    cout << "Penerbit    : " << buku2.penerbit << endl;
    cout << "Tahun Terbit: " << buku2.tahunTerbit << endl;

    return 0;
}
