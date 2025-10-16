#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	string nama;
    float nilai1, nilai2, nilai3, rataRata;
    
	cout << "Nama Siswa :";
	getline(cin, nama);
	
	cout << "Nilai Pertandingan I: ";
	cin >> nilai1;
	cout << "Nilai Pertandingan II: ";
	cin >> nilai2;
	cout << "Nilai Pertandingan III: ";
	cin >> nilai3;
	
	rataRata = round((nilai1 + nilai2 + nilai3) / 3);
	
	cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil perlombaan yang diikutinya\n";
    cout << "Hadiah yang didapat ad alah ";

	if (rataRata >= 85) {
        cout << "Komputer Core i5" << endl;
    } else if (rataRata >= 70) {
        cout << "Uang sebesar Rp. 2.500.000" << endl;
    } else {
        cout << "Hadiah Hiburan" << endl;
    }
    
    return 0;
}
