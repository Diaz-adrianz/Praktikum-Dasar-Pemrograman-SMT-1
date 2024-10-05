#include <iostream>
using namespace std;

int main() {
    int i = 5;
    
    do {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i--;
    } while (i > 0); 

    cout << endl;
    
    return 0;
}
