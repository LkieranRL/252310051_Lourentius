#include <iostream>
using namespace std;

int main() 
{
    string nama, jabatan;
    int gaji;
    const int UMR = 5437203;

    cout << "Masukan nama pegawai : ";
    cin >> nama;
    cout << "Masukan jabatan pegawai : ";
    cin >> jabatan;
    cout << "Masukan gaji pegawai : ";
    cin >> gaji;

    cout << "\nDATA PEGAWAI" << endl;
    cout << "Nama	: " << nama << endl;
    cout << "Jabatan : " << jabatan << endl;
    cout << "Gaji	: " << gaji << endl << endl;

    if (gaji > UMR) {
        cout << "Gaji pegawai diatas UMR" << endl;
    } else {
        cout << "Gaji pegawai dibawah UMR" << endl;
    }

    return 0;
}

