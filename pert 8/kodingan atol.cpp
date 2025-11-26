#include <iostream>
#include <stdlib.h>
using namespace std;

//mengubah string angka menjadi bil numerik integer

int main()
{
	char kata[20];
	float angka, a;
	
	cout << "Masukan angka = ";
	cin >> kata;
	
	angka=atol(kata);
	a = angka + 8;
	
	cout << "Hasil perubahan ditambah 8 = " << a;
	
	getchar();
}
