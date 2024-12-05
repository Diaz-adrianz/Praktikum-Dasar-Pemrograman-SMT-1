#include <iostream>
#include <vector>
using namespace std;

void kombinasi(vector<string> arr, int n, int i, int *count)
{
    if (n == i)
    {
        for (string status : arr)
        {
            cout << (status == "Menyala" ? "\e[0;32m" : "\e[0;31m") << status << " ";
        }
        (*count)++;
        cout << "\e[0;0m" << endl;
        return;
    }

    arr[i] = "Mati";
    kombinasi(arr, n, i + 1, count);

    arr[i] = "Menyala";
    kombinasi(arr, n, i + 1, count);
}

int main()
{
    int banyakLampu, count = 0;

    cout << "Masukkan banyak lampu (1 - 20): ";
    cin >> banyakLampu;

    if (banyakLampu < 1 || banyakLampu > 20)
    {
        cout << "Masukkan angka antara 1 sampai 20!" << endl;
        return 1;
    }

    vector<string> arr(banyakLampu);
    kombinasi(arr, banyakLampu, 0, &count);
    cout << "Banyak kombinasi status lampu: " << count << " kombinasi" << endl;

    return 0;
}