#include <iostream>
#include <cstring> 

using namespace std;

int main() 
{
    char teks[] = "FAKULTAS PARIWISATA DAN TEKNOLOGI INFORMASI";

    int panjang = strlen(teks);

    cout << "Kalimat  : " << teks << endl;
    cout << "Panjang kalimat adalah: " << panjang << " karakter." << endl;

    return 0;
}

