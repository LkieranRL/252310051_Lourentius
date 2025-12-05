#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int banyakJenis, banyakBeli, jumlahHarga = 0;
    char kode;
    string jenisAyam;
    int hargaSatuan = 0;
    
    cout << "GEROBAK FRIED CHICKEN\n";
    cout << "Kode   Jenis         Harga\n";
    cout << "-----------------------------\n";
    cout << "D      Dada      Rp. 2500\n";
    cout << "P      Paha      Rp. 2000\n";
    cout << "S      Sayap     Rp. 1500\n";
    cout << "-----------------------------\n\n";

    cout << "Banyak Jenis : ";
    cin >> banyakJenis;
    cout << endl;

    // Array untuk tampungan data
    string listJenis[20];
    int listHargaSatuan[20];
    int listBanyakBeli[20];
    int listJumlahHarga[20];

    for (int i = 0; i < banyakJenis; i++) {
        cout << "Jenis ke-" << i + 1 << endl;
        cout << "Jenis Potong [D/P/S] : ";
        cin >> kode;
        cout << "Banyak Beli : ";
        cin >> banyakBeli;

        // Menentukan harga dan nama jenis sesuai kode input
        if (kode == 'D' || kode == 'd') {
            jenisAyam = "Dada";
            hargaSatuan = 2500;
        } else if (kode == 'P' || kode == 'p') {
            jenisAyam = "Paha";
            hargaSatuan = 2000;
        } else if (kode == 'S' || kode == 's') {
            jenisAyam = "Sayap";
            hargaSatuan = 1500;
        } else {
            cout << "Kode salah! diabaikan.\n";
            continue;
        }

        int total = hargaSatuan * banyakBeli;
        jumlahHarga += total;

        listJenis[i] = jenisAyam;
        listHargaSatuan[i] = hargaSatuan;
        listBanyakBeli[i] = banyakBeli;
        listJumlahHarga[i] = total;

        cout << endl;
    }

    float pajak = jumlahHarga * 0.10;
    float totalBayar = jumlahHarga + pajak;

    // Output
    cout << "\n=============================================\n";
    cout << "            GEROBAK FRIED CHICKEN            \n";
    cout << "=============================================\n";
    cout << "No  Jenis       Harga   Beli   Jumlah Harga\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < banyakJenis; i++) {
        cout << i+1 << "   " 
             << setw(8) << listJenis[i] << "   "
             << setw(5) << listHargaSatuan[i] << "   "
             << setw(4) << listBanyakBeli[i] << "   "
             << setw(8) << listJumlahHarga[i] << endl;
    }

    cout << "---------------------------------------------\n";
    cout << "Jumlah Bayar : Rp " << jumlahHarga << endl;
    cout << "Pajak 10%    : Rp " << pajak << endl;
    cout << "Total Bayar  : Rp " << totalBayar << endl;
    cout << "---------------------------------------------\n";

    return 0;
}

