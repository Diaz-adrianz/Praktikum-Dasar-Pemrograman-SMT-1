#include <iostream>
using namespace std;

void printFibonacci(int limit)
{
    int x = 0, y = 1, z = 0;

    cout << x << " ";

    while (z <= limit)
    {
        cout << y << " ";
        z = x + y;
        x = y;
        y = z;
    }
}

int main()
{
    printFibonacci(17);

    cout << endl;
    return 0;
}