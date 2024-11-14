#include <iostream>
using namespace std;

int main()
{
    // pemasukan seminggu
    int days = 7;
    int income[days];

    for (int i = 0; i < days; i++)
    {
        cout << "Penjualan hari ke-" << i + 1 << ": ";
        cin >> income[i];
    }

    // total
    int total = 0;
    for (int i = 0; i < days; i++)
    {
        total += income[i];
    }

    // rata-rata
    int avg = total / days;

    cout << endl;
    cout << "Total penjualan: Rp " << total << endl;
    cout << "Rata-rata penjualan: Rp " << avg << endl;
    cout << endl;

    return 0;
}