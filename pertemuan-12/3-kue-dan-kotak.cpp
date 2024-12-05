#include <iostream>
using namespace std;

int banyakCaraMembagi(int potong, int kotak)
{
    if (kotak == 1 || potong == kotak)
        return 1;

    return banyakCaraMembagi(potong - 1, kotak - 1) + banyakCaraMembagi(potong - 1, kotak);
}

int main()
{
    int potongan = 4, kotak = 2;

    cout << "Masukkan banyak potong kue (1 - 20): ";
    cin >> potongan;

    if (potongan < 1 || 20 < potongan)
    {
        cout << "Masukkan potongan antara 1 sampai 20!" << endl;
        return 0;
    }

    cout << "Masukkan banyak kotak (1 - " << potongan << "): ";
    cin >> kotak;

    if (kotak < 1 || potongan < kotak)
    {
        cout << "Masukkan banyak kotak antara 1 sampai banyak potongan!" << endl;
        return 0;
    }

    int banyakCara = banyakCaraMembagi(potongan, kotak);
    cout << "Banyak cara membagi " << potongan << " kue ke dalam " << kotak << " kotak: " << banyakCara << " cara" << endl;

    return 0;
}