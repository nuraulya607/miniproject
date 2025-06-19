#include <iostream>
#include <vector>
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

int main() {
    inisialisasiData();
    // Output sementara untuk tahap 1
    cout << "Jumlah item: " << inventory.size() << endl;
    cout << "Jumlah pelanggan: " << pelanggan.size() << endl;
    return 0;
}
