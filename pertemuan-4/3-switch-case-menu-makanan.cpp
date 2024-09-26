#include <iostream>
using namespace std;

int main() 
{
    int pilihan;

    cout << "Menu Makanan: \n";
    cout << "1. Nasi Goreng\n";
    cout << "2. Mie Goreng\n";
    cout << "3. Soto\n";
    cout << "0. Keluar\n";

    cout << "Pilih makanan (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Anda memilih Nasi Goreng\n";
            break;
        case 2:
            cout << "Anda memilih Mie Goreng\n";
            break;
        case 3:
            cout << "Anda memilih Soto\n";
            break;
        case 0:
            cout << "Sampai jumpa :D \n";
            break;
        default:
            cout << "Pilihan tidak valid\n";
    }
    
    return 0;
}