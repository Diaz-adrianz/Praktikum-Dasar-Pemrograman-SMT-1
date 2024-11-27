#include <iostream>
using namespace std;

bool isPrimeNumber(int n)
{
    if (n <= 1)
        return false;

    for (int i = n - 1; i > 1; i--)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int input;

    cout << "Masukkan angka yang akan dicek: ";
    cin >> input;

    if (isPrimeNumber(input))
        cout << input << " adalah bilangan prima.";
    else
        cout << input << " bukan bilangan prima.";

    cout << endl;
    return 0;
}