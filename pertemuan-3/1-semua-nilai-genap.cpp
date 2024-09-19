#include <iostream>
using namespace std;

int main() 
{
    cout << "==== Program Cek Semua Nilai Genap ====" << endl;

    // deklarasi variable
    int bilSatu, bilDua, bilTiga;
    bool isAllEven;

    // ambil input bilangan pertama dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> bilSatu;

    // ambil input bilangan kedua dari pengguna
    cout << "Masukkan bilangan kedua: ";
    cin >> bilDua;

    // ambil input bilangan ketiga dari pengguna
    cout << "Masukkan bilangan ketiga: ";
    cin >> bilTiga;

    // check truthy
    isAllEven = (bilSatu % 2 == 0) & (bilDua % 2 == 0) & (bilTiga % 2 == 0);

    // tampilkan outpu
    cout << "Apakah semua nilai adalah bilangan genap? " << (isAllEven ? "Ya" : "Tidak") << endl;

    return 0;
}
