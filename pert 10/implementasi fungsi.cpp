#include <iostream>
using namespace std;

void tambah(int a, int n);

int mian()
{
	int a, b;
	a = 5;
	b = 9;
	
	cout << "Nilai sebelum fungsi digunakan\n";
	cout << "a = " << a << "b = " << b;
	
	tambah (a, b);
	
	cout << "Nilai setelah fungsi digunakan\n";
	cout << "a = " << a << "b = " << b;
	return 0;
}

void tambah(int m, int n)
{
	m += 5;
	n += 7;
	
	cout << "\nNilai didalam fungsi tambah()\n";
	cout << "m = " << m << endl << "n = " << n << endl; 
}
