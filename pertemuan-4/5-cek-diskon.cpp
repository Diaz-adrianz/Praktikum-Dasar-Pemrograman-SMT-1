#include <iostream>
#include <string>
using namespace std;

int main() 
{
    cout << "==== Program Cek Diskon Belanja ====" << endl;

    // deklarasi variabel-variabel
    string kategoriPelanggan;
    float diskon = 0, totalBelanja, totalBayar;

    // ambil input nominal belanja
    cout << "Masukkan nominal total belanja: ";
    cin >> totalBelanja;

    // ambil input kategori pelanggan
    cout << "Masukkan kategori pelanggan (Gold, Silver, Non Anggota): ";
    cin >> kategoriPelanggan;

    // set diskon berdasarkan kategori pelanggan 
    if (kategoriPelanggan == "Gold") {
        diskon = 20;
    } else if (kategoriPelanggan == "Silver") {
        diskon = 10;
    }

    // hitung total bayar
    totalBayar = totalBelanja * (100 - diskon) / 100;

    // tampilkan hasil total bayar
    cout << "Total yang harus dibayar setelah diskon: " << totalBayar << endl;

    return 0;
}