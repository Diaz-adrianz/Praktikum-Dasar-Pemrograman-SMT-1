#include <iostream>
using namespace std;

int main()
{
    cout << "==== Program Luas Lingkaran ====" << endl;

    // deklarasi variabel
    float PI = 3.14, jari, luas;
    
    // ambil input jari-jari dari pengguna
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari;

    // jalankan rumus
    luas = PI * jari * jari;

    // tampilkan output hasil
    cout << "Luas lingkaran adalah: " << luas << endl;

    return 0;
}
