#include <iostream>
using namespace std;

int main()
{
	
	float sisi, luas;
	char jb;
	do {
	
		cout << "\n===== MENGHITUNG LUAS PERSEGI =====\n";
		cout << "masukan panjang sisi persegi: ";
		cin >> sisi;
		cout << "\nrumusnya: sisi * sisi" << endl;
		cout << "Perhitungan: " << sisi << " x " << sisi << endl;
		
		luas = sisi * sisi;
		
		cout << "\njadi luas perseginya yaitu " << luas << endl;
		cout << "=====================================" << endl;
		cout << "Mau Hitung Lagi ? (Y/T): ";
		cin >> jb;
	
	}while(jb=='y' || jb=='Y');
	
	return 0;
}
