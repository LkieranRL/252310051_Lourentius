#include<iostream>
using namespace std;

int main()
{
     int number = 0;
     int sum = 0;
     
     do {
         sum += number;
         cout << "masukan angka: ";
         cin >> number;
     }
     while (number >= 1); // akan berakhir dengan input angka 0
     
     cout << "\nNilai penjumlahannya adalah: " << sum << endl;
     return 0;
 }

