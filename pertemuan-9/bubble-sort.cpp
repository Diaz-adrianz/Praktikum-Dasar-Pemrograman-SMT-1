#include <iostream>
using namespace std;

int main()
{
    int len;

    cout << "Input panjang array: ";
    cin >> len;

    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cout << "Input array ke-" << i << ": ";
        cin >> arr[i];
    }

    cout << "\nOriginal" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ", ";
    }

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nBubble sort" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << "\nSearch" << endl;

    int q;
    cout << "Cari angka: ";
    cin >> q;

    int finds = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == q)
        {
            cout << endl
                 << q << " ditemukan di index-" << i << endl;
            finds += 1;
        }
    }

    if (finds == 0)
    {
        cout << endl
             << "Angka tidak ditemukan" << endl;
    }

    cout << endl;
    return 0;
}