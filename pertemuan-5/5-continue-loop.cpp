// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 10; i++) {
//         if (i % 3 == 0) {
//             continue; 
//         }
//         cout << i << " ";
//     }

//     cout << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int banyak = 0, jumlah = 0;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            banyak++; 
            jumlah += i;
        }
    }

    cout << endl << "Banyak ganjil: " << banyak  << endl;
    cout << "Jumlah ganjil: " << jumlah  << endl;

    cout << endl;
    
    return 0;
}
