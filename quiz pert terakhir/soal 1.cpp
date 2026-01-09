#include <iostream>
using namespace std;

int main() 
{
    string data[3][2] = {
        {"Helena", "232310001"},
        {"Joshua", "232310002"},
        {"Antoni", "242310001"}
    };

    cout << "NAMA	NPM" << endl;

    for (int i = 0; i < 3; i++) {
        cout << data[i][0] << "	" << data[i][1] << endl;
    }

    return 0;
}
