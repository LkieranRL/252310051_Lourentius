#include <iostream>
#include <string>
using namespace std;
 int main(){
    float pendapatan , jasa=0, komisi=0, total=0;

    cout<<"Pendapatan hari ini Rp.";
    cin >> pendapatan;

    if(pendapatan >= 0 && pendapatan <= 200000){
        jasa = 1000;
        komisi = 0.1 * pendapatan;
    }
    else if (pendapatan <= 500000) {
        jasa = 20000;
        komisi = 0.15 * pendapatan;
    }
    else
        jasa = 30000;
        
    
    total = jasa + komisi;
    
    cout << "uang Jasa Rp. " << jasa << endl;
    cout << "uang Komisi Rp. " << komisi << endl;
    cout <<"===============================" <<endl;
    cout << "hasil Total Rp." <<total<< endl;
    getchar();

}
