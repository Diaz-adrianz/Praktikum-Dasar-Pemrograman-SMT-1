#include <iostream>
using namespace std;

int main() {
    int angka;
    int total = 0;

    do {
        cout << "Masukkan angka (0 untuk berhenti): ";
        cin >> angka;
        total += angka;
    } while (angka != 0); 

    cout << "Total angka: " << total << endl;
    return 0;
}
