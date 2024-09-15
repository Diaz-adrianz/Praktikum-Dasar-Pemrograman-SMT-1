#include <iostream>
using namespace std;

int main()
{
    cout << "==== Program Konversi Suhu C ke F ====" << endl;

    // deklarasi variabel
    float celcius, fahrenheit;
    
    // ambil input jari-jari dari pengguna
    cout << "Masukkan suhu dalam Celcius: ";
    cin >> celcius;

    // jalankan rumus
    fahrenheit = (celcius * 9 / 5) + 32;

    // tampilkan output hasil
    cout << "Suhu dalam Fahrenheit adalah: " << fahrenheit << endl;

    return 0;
}
