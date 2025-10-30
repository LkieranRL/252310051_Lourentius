#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a =3, b = 2, c = 1, bil;
	
	cout << "____________________" << endl;
	cout << "Perulangan FOR dengan break" << endl;
	cout << "____________________" << endl;
	
	for (bil = 1; bil <= 10; ++bil) {
        a += b;
        b += c;
        c += 2;

        cout << "\n" << a << "\t|\t" << b << "\t|\t" << c;

        if (c == 13)
            break;
	}
	
	 getch();
    return 0;
}
