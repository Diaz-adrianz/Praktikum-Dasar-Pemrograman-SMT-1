#include <iostream>
using namespace std;

int main() 
{
    int bil1, bil2, bil3;

    cout << "Masukkan bilangan pertama: ";
    cin >> bil1 ;

    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    if (bil2 > bil1) {
        bil1 = bil2;
    }

    cout << "Masukkan bilangan ketiga: ";
    cin >> bil3;

    if (bil3 > bil1) {
        bil1 = bil3;
    }

    cout << "Bilangan terbesar: " << bil1 << endl;

    return 0;
}