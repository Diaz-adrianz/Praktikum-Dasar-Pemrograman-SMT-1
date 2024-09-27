#include <iostream>
using namespace std;

int main() 
{
    int num, num2;

    cout << "Masukkan bilangan\t: ";
    cin >> num;

    cout << "Masukkan bilangan kedua\t: ";
    cin >> num2;

    if (num > 0 && num2 > 0) {
        cout << "Semua bilangan positif\n";
    } else if (num < 0 && num2 < 0) {
        cout << "Semua bilangan negatif\n";
    } else if (num == 0 || num2 == 0) {
        cout << "Terdapat bilangan yang nol\n";
    } else {
        cout << "Campuran bilangan positif dan negatif\n";
    }

    return 0;
}