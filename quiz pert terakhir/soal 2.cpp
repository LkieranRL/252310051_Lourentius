#include <iostream>
using namespace std;

void validasi_nilai(int *nilai) {
    if (*nilai < 0) {
        *nilai = 0;
    } else if (*nilai > 100) {
        *nilai = 100;
    }
}

int main() 
{
    int angka;

    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    validasi_nilai(&angka);

    cout << "Nilai setelah divalidasi: " << angka;

    return 0;
}
