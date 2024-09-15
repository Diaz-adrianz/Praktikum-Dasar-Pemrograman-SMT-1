#include <iostream>
using namespace std;

int main()
{
    cout << "==== Program Kalkulator Sederhana ====" << endl;

    // deklarasi variabel
    float bilanganSatu, bilanganDua;
    
    // ambil input bilangan pertama dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> bilanganSatu;

    // ambil input bilangan kedua dari pengguna
    cout << "Masukkan bilangan kedua: ";
    cin >> bilanganDua;

    // jalankan rumus dan tampilkan output hasil
    cout << "\n";
    cout << "Penjumlahan \t: " <<  bilanganSatu + bilanganDua << endl;
    cout << "Pengurangan \t: " <<  bilanganSatu - bilanganDua << endl;
    cout << "Perkalian \t: " <<  bilanganSatu * bilanganDua << endl;
    cout << "Pembagian \t: " <<  bilanganSatu / bilanganDua << endl;

    return 0;
}
