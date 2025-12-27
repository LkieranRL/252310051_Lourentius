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

	Mahasiswa Joshua;
	Joshua.nama = "Joshua";
	Joshua.npm = 232310001;
	
	cout << Joshua.nama << endl << Joshua.npm;
}
