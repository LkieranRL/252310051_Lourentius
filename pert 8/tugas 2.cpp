#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main() 
{
    char teks[] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
    
    cout << "Kalimat: " << teks << endl;

    int panjang = strlen(teks);

    cout << "Kalimat huruf kecil: ";
    for (int i = 0; i < panjang; i++) {
        cout << (char)tolower(teks[i]);
    }
    cout << endl;

    cout << "Dibalik dan huruf kecil: ";
    for (int i = panjang - 1; i >= 0; i--) {
        cout << (char)tolower(teks[i]);
    }
    cout << endl;

    return 0;
}
