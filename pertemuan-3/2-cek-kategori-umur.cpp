#include <iostream>
using namespace std;

int main() 
{
    cout << "==== Program Cek Kategori Umur ====" << endl;

    // deklarasi variable
    int umur;

    // ambil input bilangan pertama dari pengguna
    cout << "Masukkan umur anda (tahun): ";
    cin >> umur;

    // cek kategori umur tampilkan outpu
    cout << "\nAnak-anak (di bawah 12 tahun): " << (umur <= 12 ? "Ya" : "Tidak") << endl;
    cout << "Remaja (13 - 17 tahun): " << (13 <= umur && umur <= 17 ? "Ya" : "Tidak") << endl;
    cout << "Dewasa (di atas 18 tahun): " << (18 <= umur ? "Ya" : "Tidak") << endl;

    return 0;
}
