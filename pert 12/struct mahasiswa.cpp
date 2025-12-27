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
	Helena.nama = "Helena Jemina";
	Anton.npm = 242310024;
	
	cout << Helena.nama << endl << Anton.npm;
}
