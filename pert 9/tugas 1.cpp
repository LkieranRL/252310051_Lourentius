#include <iostream>
using namespace std;

int main() 
{
    int baris, kolom;

    cout << "=== PROGRAM OPERASI MATRIKS ===" << endl;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    int A[10][10], B[10][10], C[10][10];

    cout << "\nInput elemen Matriks A: \n";
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << "Matriks A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "\nInput elemen Matriks B: \n";
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            cout << "Matriks B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    cout << "\nHasil Penjumlahan A + B:\n";
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHasil Pengurangan A - B:\n";
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHasil Perkalian A * B:\n";
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            C[i][j] = 0;
            for(int k = 0; k < kolom; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

