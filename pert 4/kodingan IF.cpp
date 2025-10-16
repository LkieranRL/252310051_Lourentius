#include<iostream>
#include<string>
using namespace std;

int main()
{
	double total_beli, potongan=0, jum_bayar=0;
	
	cout << "Total pembelian Rp.";
	cin >> total_beli;
	
	if (total_beli >= 50000) {
		potongan = 0.2 * total_beli;
	}else
		potongan = 0.05 * total_beli; {
	}
		
	cout << "Besar potongan Rp." << potongan << endl;
	
	jum_bayar = total_beli - potongan;
	cout << "jumlah yang harus dibayarkan Rp." << jum_bayar;
	
	getchar();
}
