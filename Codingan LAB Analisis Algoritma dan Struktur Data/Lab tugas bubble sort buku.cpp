#include <iostream>
#include <vector>
using namespace std;

void tampilkan(vector<string> buku) {
    cout << "\nDaftar Buku:\n";
    for (int i = 0; i < buku.size(); i++) {
        cout << i + 1 << ". " << buku[i] << endl;
    }
}

void bubbleSort(vector<string> &buku) {
    for (int i = 0; i < buku.size() - 1; i++) {
        for (int j = 0; j < buku.size() - i - 1; j++) {
            if (buku[j] > buku[j + 1]) {
                swap(buku[j], buku[j + 1]);
            }
        }
    }
}

void editBuku(vector<string> &buku) {
    if (buku.empty()) {
        cout << "Belum ada buku!\n";
        return;
    }

    tampilkan(buku);
    int index;
    cout << "Pilih nomor buku yang ingin diedit: ";
    cin >> index;
    cin.ignore();

    if (index < 1 || index > buku.size()) {
        cout << "Nomor tidak valid!\n";
        return;
    }

    string judulBaru;
    cout << "Masukkan judul baru: ";
    getline(cin, judulBaru);

    buku[index - 1] = judulBaru;
    cout << "Buku berhasil diubah!\n";
}

void hapusBuku(vector<string> &buku) {
    if (buku.empty()) {
        cout << "Belum ada buku!\n";
        return;
    }

    tampilkan(buku);
    int index;
    cout << "Pilih nomor buku yang ingin dihapus: ";
    cin >> index;
    cin.ignore();

    if (index < 1 || index > buku.size()) {
        cout << "Nomor tidak valid!\n";
        return;
    }

    buku.erase(buku.begin() + index - 1);
    cout << "Buku berhasil dihapus!\n";
}

int main() {
    vector<string> buku;
    int pilihan;
    string judul;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Input Buku\n";
        cout << "2. Tampilkan Buku\n";
        cout << "3. Sorting Buku\n";
        cout << "4. Edit Buku\n";
		cout << "5. Hapus Buku\n";
		cout << "6. Keluar\n";
		cout << "Pilih: ";
		cin >> pilihan;

		if (cin.fail() || pilihan < 1 || pilihan > 6) {
    cin.clear(); 
    cin.ignore(1000, '\n');
    cout << "Pilihan tidak tersedia, silahkan masukan ulang!\n";
    continue;
}
	cin.ignore();

        switch (pilihan) {
            case 1:
                cout << "Masukkan judul buku: ";
                getline(cin, judul);
                buku.push_back(judul);
                break;

            case 2:
                tampilkan(buku);
                break;

            case 3:
                cout << "\nSebelum Sorting:";
                tampilkan(buku);

                bubbleSort(buku);

                cout << "\nSetelah Sorting:";
                tampilkan(buku);
                break;
            
            case 4:
    		editBuku(buku);
    		break;

			case 5:
		    hapusBuku(buku);
		    break;
        }

    } while (pilihan != 6);

    return 0;
}
