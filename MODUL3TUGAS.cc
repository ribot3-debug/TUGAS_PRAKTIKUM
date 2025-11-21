#include <iostream>
using namespace std;

int main() {
    double hargaBarang, diskon, hargaSetelahDiskon;

    cout << "Masukkan harga barang: ";
    cin >> hargaBarang;

    cout << "Masukkan diskon (%): ";
    cin >> diskon;

    hargaSetelahDiskon = hargaBarang - (hargaBarang * diskon / 100);

    cout << "Harga setelah diskon: " << hargaSetelahDiskon << endl;

    return 0;
}

