#include <iostream>
using namespace std;

int main() 
{
	
	float jari_jari, tinggi, volume;
	const float phi = 3.14;
	char jb;
	do {
	
		cout << "\n=== MENGHITUNG VOLUME TABUNG ===\n";
		cout << "masukan jari-jari lingkaran: ";
		cin >> jari_jari;
		cout << "masukan tinggi tabung: ";
		cin >> tinggi;
		cout << "\nrumusnya: phi * jari-jari * jari-jari * tinggi" << endl;
		cout << "Perhitungan: " << phi << " x " << jari_jari << " x " << jari_jari << " X " << tinggi << endl;
		
		volume = phi * jari_jari * jari_jari * tinggi;
		
		cout << "\njadi volume tabungnya yaitu " << volume << endl;
		cout << "=====================================" << endl;
		cout << "Mau Hitung Lagi ? (Y/T): ";
		cin >> jb;
			
	}while(jb=='y' || jb=='Y');
	
	return 0;
}
