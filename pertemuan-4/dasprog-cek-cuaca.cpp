#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int suhu;
    string cuaca;

    cout << "Masukkan suhu celcius: ";
    cin >> suhu;

    if (suhu > 35) {
        cuaca = "panas";
    } else if (suhu > 25) {
        cuaca = "hangat";
    } else if (suhu > 15) {
        cuaca = "sejuk";
    } else {
        cuaca = "dingin";
    }

    cout << "Cuaca hari ini gimana? " << cuaca << endl;

    return 0;
}