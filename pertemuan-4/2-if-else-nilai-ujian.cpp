#include <iostream>
using namespace std;

int main() 
{
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai > 100 || nilai < 0) {
        cout << "Galat! nilai di luar rentang 0 - 100\n";
    } else if (nilai >= 85) {
        cout << "Nilai: A\n";
    } else if (nilai >= 70) {
        cout << "Nilai: B\n";
    } else if (nilai >= 55) {
        cout << "Nilai: C\n";
    } else if (nilai >= 40) {
        cout << "Nilai: D\n";
    } else {
        cout << "Nilai: E\n";
    }

    return 0;
}