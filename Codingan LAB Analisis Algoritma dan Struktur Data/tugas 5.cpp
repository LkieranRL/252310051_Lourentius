#include <iostream>
using namespace std;

// Deklarasi class
class contoh {
private:
    int nilai; // atribut private

public:
    // Constructor (memiliki nama sama dengan class)
    contoh(int n) {
        nilai = n; // inisialisasi nilai saat objek dibuat
    }

    // Method untuk mengambil nilai
    int getNum() {
        return nilai;
    }
};

int main() {
    // Membuat objek sekaligus mengirim nilai ke constructor
    contoh obj(10);

    // Menampilkan nilai yang sudah di-set oleh constructor
    cout << "nilai yang diinput: " << obj.getNum() << endl;

    return 0;
}
