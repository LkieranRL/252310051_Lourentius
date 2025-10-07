#include <iostream>      // Library untuk input dan output (cin, cout)
using namespace std;     // agar tidak perlu menulis std:: setiap kali

int main() {

    int x = 50;         // Variabel x bernilai 50

    int a, b, c, d, e;  // Deklarasi variabel a, b, c, d, e bertipe integer

    a = x > 5 + 5;      // Mengecek apakah x lebih besar dari (5 + 5). Hasilnya true(1)/false(0)

    b = x > 100;        // Mengecek apakah x lebih besar dari 100

    c = a && b;         // Logika AND antara a dan b (true jika keduanya true)

    d = a || b;         // Logika OR antara a dan b (true jika salah satu true)

    e = !(c);           // Logika NOT untuk c (true jika c false, dan sebaliknya)

    cout << "\nNilai a = x > 5 + 5 = " << a << endl;   // Menampilkan output a

    cout << "\nNilai b = x > 100 = " << b << endl;    // Menampilkan output b

    cout << "\nNilai c = a && b = " << c << endl;     // Menampilkan output c

    cout << "\nNilai d = a || b = " << d << endl;     // Menampilkan output d

    cout << "\nNilai e = !(c) = " << e << endl;       // Menampilkan output e

    getchar(); // Membaca satu karakter dari input keyboard dengan cara sederhana untuk mencegah program langsung tertutup setelah dijalankan di Windows(Dev C++)
}
