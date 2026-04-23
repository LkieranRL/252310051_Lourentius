#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> data_nisn = {105, 102, 108, 101, 109, 104, 107};

    cout << "Data sebelum diurutkan:\n";
    for (auto d : data_nisn) cout << d << " ";
    cout << "\n";

    quickSort(data_nisn, 0, data_nisn.size() - 1);

    cout << "\nData setelah diurutkan (ascending):\n";
    for (auto d : data_nisn) cout << d << " ";
    cout << "\n";

    return 0;
}

