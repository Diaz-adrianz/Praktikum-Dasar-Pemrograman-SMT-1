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

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}