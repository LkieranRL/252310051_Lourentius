#include<iostream>
using namespace std;
/*
int main()
{
    int ilham, amir, *raka;
    ilham = 75;
    amir = ilham;
    raka = &amir;
    cout << "Nilai Ilham: " << ilham << endl;
    cout << "Nilai Amir: " << amir << endl;
    cout << "Nilai Raka" << *raka << endl;
    return 0;
}
*/
// int main()
// {
//     int yofrie = 93;
//     int *hadiansyah;
//     cout <<"Nilai awal yofrie : " << yofrie << endl;
//     hadiansyah = &yofrie;
//     cout <<"Nilai hadiansyah sekarang : " << *hadiansyah << endl;
//     *hadiansyah = 50;
//     cout <<"Nilai hadiansyah setelah diubah : " << *hadiansyah << endl;
//     return 0;
// }

/* Pointer to pointer*/
int main(){

    int ilham;
    int *raka;
    int **amir;
    int ***bob;

    ilham = 75;
    cout <<"Nilai ilham : " << ilham << endl;
    raka = &ilham;
    amir = &raka;
    bob = &amir;

    cout <<"Nilai Raka hasil mengakses ilham : " << *raka << endl;
    cout <<"Nilai Amir hasil mengakses raka : " << **amir << endl;
    cout <<"Nilai Bob hasil mengakses amir : " << ***bob << endl;
    return 0;
}
