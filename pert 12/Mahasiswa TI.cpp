#include <iostream>
using namespace std;

struct Mahasiswa{
	string nama;
	string kelas;
	int npm;
	float ipk;
}Helena, Anton;

int main()
{
//	Helena.nama = "Helena Jemina";
//	Anton.npm = 242310024;

//	Mahasiswa Joshua;
//	Joshua.nama = "Joshua";
//	Joshua.npm = 232310001;
//	
//	cout << Joshua.nama << endl << Joshua.npm;
	
//	Mahasiswa Daffa{"Daffa W", "TI-23-PA", 232310036, 38.9};
//	cout << Daffa.nama;
	
	Mahasiswa TI[3];
	TI[0].nama = "Charlos";
	TI[0].npm = 232310024;
	
	TI[1].nama = "Rhainy";
	TI[1].npm = 232310026;
	
	TI[2].nama = "Wili";
	TI[2].npm = 232310024;
	
	for (int i = 0; i < 3; i++){
		cout << TI[i].nama << endl << TI[i].npm << endl << endl;
	}

}

