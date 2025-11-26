#include <iostream>
#include <stdlib.h>
using namespace std;

//mengubah string angka menjadi bil numerik integer

int main()
{
	char kata[20];
	float angka, a, b;
	
	cout << "Masukan angka = ";
	cin >> kata;
	
	angka=atoi(kata);
	a = angka + 7;
	
	cout << "Hasil perubahan ditambah 7 = " << a;
	
	getchar();
}
