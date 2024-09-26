#include <iostream>
using namespace std;

int main()
{
    cout << "==== Program Konversi Suhu C ke F ====" << endl;

    int nilai;
    char grade;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 80) {
        grade = 'A';
    }
    else if (nilai >= 60 && nilai <= 79) {
        grade = 'B';
    } 
    else if (nilai >= 40 && nilai <= 59) {grade = 'C';} 
    else {
        grade = 'D'; 
    } 

    cout << "Grade anda: " << grade;

    return 0;
}
