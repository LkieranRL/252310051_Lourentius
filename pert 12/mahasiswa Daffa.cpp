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
	
	Mahasiswa Daffa{"Daffa W", "TI-23-PA", 232310036, 38.9};
	cout << Daffa.nama;
	
return 0;
}

