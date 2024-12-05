#include <iostream>
using namespace std;

int banyakCaraNaikTangga(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    return banyakCaraNaikTangga(n - 1) + banyakCaraNaikTangga(n - 2) + banyakCaraNaikTangga(n - 3);
}

int main()
{
    int anakTangga;

    cout << "Masukkan banyak anak tangga (1 - 30): ";
    cin >> anakTangga;

    if (anakTangga < 1 || anakTangga > 30)
    {
        cout << "Masukkan angka antara 1 sampai 30!" << endl;
        return 0;
    }

    int result = banyakCaraNaikTangga(anakTangga);
    cout << "Banyak cara naik tangga: " << result << endl;
    return 0;
}