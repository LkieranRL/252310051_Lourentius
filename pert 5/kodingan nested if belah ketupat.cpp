#include <iostream>
using namespace std;

int main() {
    int a, i, j, k;

    cout << "Masukkan jumlah baris: ";
    cin >> a;
    cout << endl;

    for(i = 1; i <= a; i++) {
        for(j = i; j <= a; j++) {
            cout << " *";
        }
        int jaden = (i - 1) * 4;
        for(int s = 1; s <= jaden; s++) {
            cout << " ";
        }
        for(k = a; k >= i; k--) {
            cout << " *";
        }
        cout << endl;
    }

    for(i = 1; i <= a; i++) {
        for(j = 1; j <= i; j++) {
            cout << " *";
        }
        for(j = 1; j <= (a - i); j++) {
            cout << "    ";
        }
        for(k = 1; k <= i; k++) {
            cout << " *";
        }
        cout << endl;
    }

    cin.get();
    cin.get();
}
