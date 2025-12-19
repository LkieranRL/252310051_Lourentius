#include<conio.h>
#include<iostream>
#include<stdio.h>
using namespace std;

void tambah(int *c, int *b);

int main ()
{
int a,b;
a=4;
b=6;    
// clrscr();
cout <<"Nilai sebelum pemanggilan fungsi  : " << endl;
cout <<"a = " << a <<" b = "<<b<< endl;
tambah(&a,&b);
cout <<"Nilai setelah pemanggilan fungsi  : " << endl;
cout <<"a = " << a <<" b = "<<b<< endl;
getch();
}

void tambah(int *c, int *d)
{
    *c += 7;
    *d += 5;
    cout << endl;
    cout <<"Nilai di akhir fungsi tambah : " << endl;
    cout <<"c = " << *c <<" d = "<<*d<< endl;
}
