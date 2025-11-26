#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
    char kalimat1[50] = "Teknik";
    char kalimat2[] = " Informatika"; 
    
    cout << "Kalimat 1: " << kalimat1 << endl;
    cout << "Kalimat 2: " << kalimat2 << endl;

    strcat(kalimat1, kalimat2); 

    cout << "Hasil penggabungan: " << kalimat1 << endl;

    return 0;
}

