#include <iostream>
#include <string>
using namespace std;

class Computer {
private:
    string brand;
    string processor;
    int ram;

public:
    void setBrand(string b) {
        brand = b;
    }

    void setProcessor(string p) {
        processor = p;
    }

    void setRam(int r) {
        ram = r;
    }
    string getBrand() {
        return brand;
    }
    string getProcessor() {
        return processor;
    }
    int getRam() {
        return ram;
    }
    void runGame() {
        if (ram >= 16) {
            cout << "Computer mampu menjalankan game berat." << endl;
        } else {
            cout << "Computer hanya mampu menjalankan game ringan." << endl;
        }
    }
};

int main() {
    Computer pc;

    string brand, processor;
    int ram;

    cout << "Masukkan Brand Computer : ";
    getline(cin, brand);

    cout << "Masukkan Processor : ";
    getline(cin, processor);

    cout << "Masukkan RAM (GB) : ";
    cin >> ram;

    pc.setBrand(brand);
    pc.setProcessor(processor);
    pc.setRam(ram);

    cout << "\n=== Data Computer ===" << endl;
    cout << "Brand      : " << pc.getBrand() << endl;
    cout << "Processor  : " << pc.getProcessor() << endl;
    cout << "RAM        : " << pc.getRam() << " GB" << endl;

    cout << "\n=== Hasil Method ===" << endl;
    pc.runGame();

    return 0;
}
