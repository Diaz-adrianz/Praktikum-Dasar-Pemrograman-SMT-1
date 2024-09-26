#include <iostream>
using namespace std;

int main() 
{
    int num, num2;

    cout << "Masukkan bilangan\t: ";
    cin >> num;

    cout << "Masukkan bilangan kedua\t: ";
    cin >> num2;

    if (num > 0) {
        cout << "Bilangan pertama positif\n";
    } else if (num < 0) {
        cout << "Bilangan pertama negatif\n";
    } else {
        cout << "BIlangan pertama nol\n";
    }

    if (num2 > 0) {
        cout << "Bilangan kedua positif\n";
    } else if (num2 < 0) {
        cout << "Bilangan kedua negatif\n";
    } else {
        cout << "BIlangan kedua nol\n";
    }

    return 0;
}