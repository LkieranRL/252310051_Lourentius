#include <iostream>
using namespace std;

class Mahasiswa {
protected:
    string nama;
    string nim;
    string jurusan;
    int umur;

public:
    void setData(string n, string ni, string j, int u) {
        nama = n;
        nim = ni;
        jurusan = j;
        umur = u;
    }

    virtual void tampilData() {
        cout << "Nama     : " << nama << endl;
        cout << "NIM      : " << nim << endl;
        cout << "Jurusan  : " << jurusan << endl;
        cout << "Umur     : " << umur << endl;
    }

    virtual void aktivitas() {
        cout << "Mahasiswa sedang belajar umum." << endl;
    }
};

class MahasiswaTI : public Mahasiswa {
private:
    string bahasaPemrograman;
    string laptop;
    int semester;
    float ipk;

public:
    void setDataTI(string bp, string lp, int s, float i) {
        bahasaPemrograman = bp;
        laptop = lp;
        semester = s;
        ipk = i;
    }

    void tampilData() override {
        Mahasiswa::tampilData();
        cout << "Bahasa   : " << bahasaPemrograman << endl;
        cout << "Laptop   : " << laptop << endl;
        cout << "Semester : " << semester << endl;
        cout << "IPK      : " << ipk << endl;
    }

    void aktivitas() override {
        cout << "Mahasiswa TI sedang coding." << endl;
    }
};

class MahasiswaDesain : public Mahasiswa {
private:
    string software;
    string alat;
    int semester;
    float ipk;

public:
    void setDataDesain(string s, string a, int sm, float i) {
        software = s;
        alat = a;
        semester = sm;
        ipk = i;
    }

    void tampilData() override {
        Mahasiswa::tampilData();
        cout << "Software : " << software << endl;
        cout << "Alat     : " << alat << endl;
        cout << "Semester : " << semester << endl;
        cout << "IPK      : " << ipk << endl;
    }

    void aktivitas() override {
        cout << "Mahasiswa Desain sedang membuat desain." << endl;
    }
};

int main() {
    MahasiswaTI ti;
    MahasiswaDesain desain;

    ti.setData("Andi", "123", "Teknik Informatika", 20);
    ti.setDataTI("C++", "Asus", 4, 3.8);

    desain.setData("Budi", "456", "Desain Grafis", 21);
    desain.setDataDesain("Photoshop", "Tablet", 5, 3.7);

    cout << "=== DATA MAHASISWA TI ===" << endl;
    ti.tampilData();
    ti.aktivitas();

    cout << "\n=== DATA MAHASISWA DESAIN ===" << endl;
    desain.tampilData();
    desain.aktivitas();

    return 0;
}
