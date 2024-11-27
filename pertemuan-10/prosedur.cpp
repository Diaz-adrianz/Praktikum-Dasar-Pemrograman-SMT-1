#include <iostream>
using namespace std;

void sayHello(string name)
{
    cout << "Halo, " << name << "!" << endl;
}

int main()
{
    sayHello("Santoso");
    sayHello("Wahyu");

    return 0;
}