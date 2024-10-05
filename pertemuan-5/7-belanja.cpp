#include <iostream>
using namespace std;

int main()
{   
    cout << "==== AYO BELANJA ====" << endl;

    int jumlahBarang, total = 0; 
    
    cout << "Masukkan jumlah barang yang dibeli: ";
    cin >> jumlahBarang;

    for (int i = 1; i <= jumlahBarang; i++) {
        int harga;

        cout << "Masukkan harga barang ke-" << i << ": ";
        cin >> harga;

        total += harga;
    }

    cout << endl << "Total belanja: " << total << endl;

    return 0;
}