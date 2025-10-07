#include <iostream>
using namespace std;

int main()
{
	
	float jari_jari, luas;
	const float phi = 3.14;
	char jb;
	do {
	
		cout << "\n===== MENGHITUNG LUAS LINGKARAN =====\n";
		cout << "masukan jari-jari lingkaran: ";
		cin >> jari_jari;
		cout << "\nrumusnya: phi * jari-jari * jari-jari" << endl;
		cout << "Perhitungan: " << phi << " x " << jari_jari << " x " << jari_jari << endl;
		
		luas = phi * jari_jari * jari_jari;
		
		cout << "\njadi luas lingkarannya yaitu " << luas << endl;
		cout << "=====================================" << endl;
		cout << "Mau Hitung Lagi ? (Y/T): ";
		cin >> jb;
	
	}while(jb=='y' || jb=='Y');
	
	return 0;
}
