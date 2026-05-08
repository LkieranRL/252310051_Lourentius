#include <iostream>
using namespace std;

class BangunRuang {
protected:
    double LUAS_ALAS;
    double VOLUME;

public:
    virtual void HITUNGLUAS_ALAS() = 0;
    virtual void HITUNGVOLUME() = 0;

    double getLuasAlas() {
        return LUAS_ALAS;
    }

    double getVolume() {
        return VOLUME;
    }
};

class Balok : public BangunRuang {
private:
    double panjang, lebar, tinggi;

public:
    void setPanjang(double p) {
        panjang = p;
    }

    void setLebar(double l) {
        lebar = l;
    }

    void setTinggi(double t) {
        tinggi = t;
    }

    void HITUNGLUAS_ALAS() override {
        LUAS_ALAS = panjang * lebar;
    }

    void HITUNGVOLUME() override {
        VOLUME = panjang * lebar * tinggi;
    }
};

class Tabung : public BangunRuang {
private:
    double jariJari, tinggi;

public:
    const double phi = 3.14;

    void setJariJari(double r) {
        jariJari = r;
    }

    void setTinggi(double t) {
        tinggi = t;
    }

    void HITUNGLUAS_ALAS() override {
        LUAS_ALAS = phi * jariJari * jariJari;
    }

    void HITUNGVOLUME() override {
        VOLUME = phi * jariJari * jariJari * tinggi;
    }
};

int main() {
    Balok balok;

    double p, l, t;

    cout << "=== INPUT DATA BALOK ===" << endl;
    cout << "Masukkan Panjang : ";
    cin >> p;

    cout << "Masukkan Lebar   : ";
    cin >> l;

    cout << "Masukkan Tinggi  : ";
    cin >> t;

    balok.setPanjang(p);
    balok.setLebar(l);
    balok.setTinggi(t);

    balok.HITUNGLUAS_ALAS();
    balok.HITUNGVOLUME();

    cout << "\n=== HASIL BALOK ===" << endl;
    cout << "Luas Alas : " << balok.getLuasAlas() << endl;
    cout << "Volume    : " << balok.getVolume() << endl;

    Tabung tabung;

    double r, tt;

    cout << "\n=== INPUT DATA TABUNG ===" << endl;
    cout << "Masukkan Jari-jari : ";
    cin >> r;

    cout << "Masukkan Tinggi    : ";
    cin >> tt;

    tabung.setJariJari(r);
    tabung.setTinggi(tt);

    tabung.HITUNGLUAS_ALAS();
    tabung.HITUNGVOLUME();

    cout << "\n=== HASIL TABUNG ===" << endl;
    cout << "Luas Alas : " << tabung.getLuasAlas() << endl;
    cout << "Volume    : " << tabung.getVolume() << endl;

    return 0;
}
