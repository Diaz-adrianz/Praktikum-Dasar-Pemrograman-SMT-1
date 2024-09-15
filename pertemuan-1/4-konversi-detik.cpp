#include <iostream>
using namespace std;

int main()
{
    cout << "==== Program Konversi Detik ke Jam, Menit, dan Detik ====" << endl;

    // deklarasi variabel
    int totalDetik, jam, menit, detik;    

    cout << "Masukkan jumlah detik: ";
    cin >> totalDetik;

    // jalankan rumus-rumus
    jam = totalDetik / 3600;
    menit = (totalDetik % 3600) / 60;
    detik = totalDetik % 60;

    // tampilkan output hasil
    cout << "Hasil konversi: ";
    cout << jam << " jam, "; 
    cout << menit << " menit, "; 
    cout << detik << " detik"; 
    cout << endl;

    return 0;
}
