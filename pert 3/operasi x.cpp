#include <iostream>
using namespace std;

int main()

{
	int a, b, c=0, d=0;
	
	cout<< "oprasi perkalian"<< endl;
	cout<< "masukan nilai A = ";
	cin>> a;
	
	cout << "masukan nilai B = ";
	cin>> b;
	
	c= a % b;
	d= a * b;
	cout<< "hasil dari c=  A  % B ="<< c << endl;
	cout<< "hasil dari D=  A  * B ="<< d << endl;
	
	getchar();
}
