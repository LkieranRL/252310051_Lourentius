#include <iostream>
using namespace std;

void balikKalimat(string kalimat, string &hasil) {
    hasil = "";
    int i = kalimat.length();

    while (i > 0) {
        hasil += kalimat[i - 1];
        i--;
    }
}

int main() 
{
    string kalimat, hasil;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    balikKalimat(kalimat, hasil);

    cout << "Kalimat setelah dibalik: " << hasil << endl;

    return 0;
}
