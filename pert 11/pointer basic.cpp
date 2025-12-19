#include <iostream>
using namespace std; 
    int main() {
        int x = 5;
        int *ptrX = &x;

        cout << *ptrX << endl; // Output: 5

        return 0;
    }
