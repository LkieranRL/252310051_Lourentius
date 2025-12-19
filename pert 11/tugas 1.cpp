#include<iostream>
using namespace std;
void tukar(int *x, int *y);

int main()
{
    int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    cout << "\nNilai sebelum pertukaran: " << endl;
    cout << "a = " << a << endl;
	cout << "b = " << b << endl;

    tukar(&a, &b);

    cout << "\nNilai setelah pertukaran: " << endl;
    cout << "a = " << a << endl;
	cout << "b = " << b << endl;
    return 0;

}
void tukar(int *x, int *y){
    int c;
    c = *x;
    *x = *y;
    *y = c;
}
