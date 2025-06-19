#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Item {
    string nama;
    int stok;
    int harga;
};

struct Pelanggan {
    string nama;
    int TopUp;
};

vector<Item> inventory;
vector<Pelanggan> pelanggan;

void inisialisasiData() {
    inventory = {
        {"Diamond FF", 70, 9000},
        {"UC PUBG", 60, 14000},
        {"Diamond ML", 59, 15500}
    };

    pelanggan = {
        {"Arin", 155000},
        {"Adel", 140000},
        {"Aulia", 90000}
    };

    cout << "Data berhasil diinisialisasi.\n";
}

void tampilkanInventory() {
    cout << "Daftar Inventory:\n";
    cout << left << setw(5) << "No" 
         << setw(20) << "Nama" 
         << setw(10) << "Stok" 
         << setw(10) << "Harga" << "\n";

    for (int i = 0; i < inventory.size(); i++) {
        cout << setw(5) << (i + 1) 
             << setw(20) << inventory[i].nama 
             << setw(10) << inventory[i].stok 
             << setw(10) << inventory[i].harga << "\n";
    }
}

void tampilkanPelanggan() {
    cout << "Data Pelanggan:\n";
    for (auto& p : pelanggan) {
        cout << "- " << p.nama << " (Top Up: Rp " << p.TopUp << ")\n";
    }
}

int main() {
    inisialisasiData();
    // Tahap 1: Inisialisasi Data
    tampilkanInventory();
    // Tahap 2: Tampilkan Inventory
    tampilkanPelanggan();
    // Tahap 3: Tampilkan Pelanggan
    cout << "Jumlah item: " << inventory.size() << endl;
    cout << "Jumlah pelanggan: " << pelanggan.size() << endl;
    return 0;
}
