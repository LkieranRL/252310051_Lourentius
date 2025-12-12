#include <iostream>
using namespace std;

double konversiSuhu(double nilai, char dari, char ke) {
    double hasil = nilai;

    if (dari == 'C') {
        hasil = nilai;
    } else if (dari == 'F') {
        hasil = (nilai - 32) * 5.0 / 9.0;
    } else if (dari == 'K') {
        hasil = nilai - 273.15;
    }

    if (ke == 'C') {
        return hasil;
    } else if (ke == 'F') {
        return (hasil * 9.0 / 5.0) + 32;
    } else if (ke == 'K') {
        return hasil + 273.15;
    }

    return hasil; 
}

int main() {
    char dari, ke;
    double nilai;
	
	cout << "=======================" << endl;
	cout << "|Program Konversi Suhu|" << endl;
	cout << "=======================" << endl;
	cout << "(Celsius/Fahrenheit/kelvin)" << endl << endl;
    cout << "Jenis suhu awal (C/F/K): ";
    cin >> dari;

    cout << "Masukkan nilai suhu: ";
    cin >> nilai;

    cout << "Jenis suhu tujuan (C/F/K): ";
    cin >> ke;

    dari = toupper(dari);
    ke = toupper(ke);

    double hasil = konversiSuhu(nilai, dari, ke);

    cout << "\nHasil konversi: " << hasil << " " << ke << endl;

    return 0;
}

