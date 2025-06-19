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

void tambahItem() {
    Item item;
    cout << "\n Tambah Item:\n";
    cout << "Nama: "; cin >> ws; getline(cin, item.nama);
    cout << "Stok: "; cin >> item.stok;
    cout << "Harga: "; cin >> item.harga;
    inventory.push_back(item);
    cout << "Item berhasil ditambahkan!\n";
    }

void hapusItem() {
    int no;
    tampilkanInventory();
    cout << "Nomor item yang ingin dihapus: ";
    cin >> no;
    no -= 1;
    if (no >= 0 && no < inventory.size()) {
        cout << "Item " << inventory[no].nama << " dihapus.\n";
        inventory.erase(inventory.begin() + no);
    } else {
        cout << "Nomor tidak valid.\n";
    }
}

void totalData() {
    int totalStok = 0;
    int totalTopup = 0;
    for (auto& i : inventory) totalStok += i.stok;
    for (auto& p : pelanggan) totalTopup += p.TopUp;

    cout << "Total Stok: " << totalStok << endl;
    cout << "Total Top Up: Rp " << totalTopup << endl;
}

int main() {
    inisialisasiData();
    tampilkanInventory();
    tampilkanPelanggan();
    tambahItem();
    tampilkanInventory();
    hapusItem();
    tampilkanInventory();
    totalData();
    return 0;
}
