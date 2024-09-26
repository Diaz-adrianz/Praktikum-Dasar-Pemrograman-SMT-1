#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char huruf;

    cout << "Masukkan sebuah huruf: ";
    cin >> huruf;
    
    huruf = toupper(huruf);
    if (huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O') {
        cout << "Huruf vokal";
    } else {
        cout << "Huruf konsonan";
    }

    return 0;
}