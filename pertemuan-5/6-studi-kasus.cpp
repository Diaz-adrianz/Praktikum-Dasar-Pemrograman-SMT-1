#include <iostream>
using namespace std;

int main() {
    int angka;
    int total = 0;
    int jumlahGenap = 0, jumlahGanjil = 0;

    do {
        cout << "Masukkan angka (0 untuk berhenti): ";
        cin >> angka;
        total += angka;

        if (angka % 2 == 0) {
            jumlahGenap++;
        } else {
            jumlahGanjil++;
        }

    } while (angka != 0); 

    cout << "Total angka\t: " << total << endl;
    cout << "Banyak ganjil\t: " << jumlahGanjil << endl;
    cout << "Banyak genap\t: " << jumlahGenap << endl;
    return 0;
}
