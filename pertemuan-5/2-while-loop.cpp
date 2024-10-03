#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int total = 0;
    
    while (i <= 10) {
        total += i;
        if (total > 25) { 
            break;
        }
        i++;
    }
    
    cout << "Total: " << total << endl;
    return 0;
}
