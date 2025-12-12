#include <iostream>
#include <string>
using namespace std;

int hitungKarakter(string kalimat, char cari) {
    int jumlah = 0;
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == cari) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    string kalimat;
    char karakter;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan karakter yang ingin dihitung: ";
    cin >> karakter;

    int hasil = hitungKarakter(kalimat, karakter);

    cout << "Jumlah karakter '" << karakter << "' dalam kalimat adalah: " << hasil << endl;

    return 0;
}

