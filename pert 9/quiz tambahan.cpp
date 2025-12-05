#include <iostream>
using namespace std;

int main()
{
	int r, c, a[3][3], b[3][3], sum[100][100], i, j;
	
	cout << endl << "Masukkan nilai matrix:" << endl;
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			cout << "Matriks a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	
	cout << endl << "Hasil matrix: " << endl;
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
