#include <iostream>
using namespace std;

int faktorial(int n) {
    int hasil = 1;
    for(int i = 1; i <= n; i++) {
        hasil = hasil * i;
    }
    return hasil; 
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    int hasil = faktorial(angka);

    cout << angka << "!" << " adalah: " << hasil << endl;

    return 0;
}
