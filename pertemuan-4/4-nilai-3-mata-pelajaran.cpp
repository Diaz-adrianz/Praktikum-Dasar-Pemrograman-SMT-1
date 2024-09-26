#include <iostream>
#include <string>
using namespace std;

int main() 
{
    cout << "==== Program Cek Nilai Tiga Mata Pelajaran ====" << endl;

    // deklarasi variabel
    string nilai;
    float rataRata, nilai1, nilai2, nilai3;

    // ambil input nilai pertama
    cout << "Masukkan nilai matematika\t: ";
    cin >> nilai1;

    // ambil input nilai kedua
    cout << "Masukkan nilai fisika\t\t: ";
    cin >> nilai2;

    // ambil input nilai ketiga
    cout << "Masukkan nilai informatika\t: ";
    cin >> nilai3;

    // hitung rata rata 
    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    // cek keterangan nilai
    if (rataRata >= 85) {
        nilai = "Sangat Baik";
    } else if (rataRata >= 70) {
        nilai = "Baik";
    } else if (rataRata >= 60) {
        nilai = "Cukup";
    } else  {
        nilai = "Kurang";
    }

    // tampilkan hasil 
    cout << "\nRata-rata\t\t: " << rataRata << endl;
    cout << "Keterangan nilai\t: " << nilai << endl;

    return 0;
}