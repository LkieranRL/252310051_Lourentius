/*#include<iostream.h>
#include<stdio.h>
#include<conio.h>

main(){

    int a, b;
    char lagi;

    atas:
    clrser();
    
    cout <<"Masukan Bilangan = ";
    cin >> a;

    b = a % 2;

    printf("Nilai" %d%%2 adalah = %d", a, b);
    printf("\n\nIngin Hitung Lagi[Y/T]: ");
    lagi = getche();

    if (lagi =='Y' || lagi =='y')
    goto atas;
    getch();

}
    */

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
    int a, b;
    char lagi;

atas:
    system("cls");  

    cout << "Masukan Bilangan = ";
    cin >> a;

    b = a % 2;

    printf("Nilai %d %% 2 adalah = %d", a, b);
    printf("\n\nIngin Hitung Lagi [Y/T]: ");
    lagi = getche();  

    if (lagi == 'Y' || lagi == 'y') {
        goto atas;
    }

akhir:
    getch(); 
}
