#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a, b;
	char ulang;

	atas:
	system("cls");
	cout << "Masukkan Bilangan =";
	cin >> a;
	
	b = a % 2;
	
	cout << "Nilai " << a << " % 2 adalah = " << b;
	cout << ("n\n\Ingin Hitung lagi [Y/T] :");
	cin >> ulang;
	
	if(ulang=='Y'||ulang=='y'){
		goto atas;
	}
	if(ulang=='T'||ulang=='t'){
		goto bawah;
	}
	bawah:
	
	return 0;
}

