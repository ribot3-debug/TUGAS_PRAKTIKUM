#include <iostream>
using namespace std;

int main() {
    double angka;     // untuk nilai angka siswa
    char nilai;       // untuk grade huruf siswa
    string keterangan;

    cout << "Masukkan nilai siswa: ";
    cin >> angka;

    if (angka > 89) {
        nilai = 'A';
        keterangan = "Lulus";
    } else if (angka > 80) {
        nilai = 'B';
        keterangan = "Lulus";
    } else if (angka > 70) {
        nilai = 'C';
        keterangan = "Lulus";
    } else if (angka > 60) {
        nilai = 'E';
        keterangan = "Tidak Lulus";
    } else {
        nilai = 'F';
        keterangan = "Tidak Lulus";
    }

    cout << "Grade siswa: " << nilai << endl;
    cout << "Keterangan: " << keterangan << endl;

    return 0;
}
