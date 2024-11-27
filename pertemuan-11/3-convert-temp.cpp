#include <iostream>
using namespace std;

void showMenu()
{
    cout << "\nProgram Konversi suhu\n";
    cout << "1. Ubah celcius ke fahrenheit\n";
    cout << "2. Ubah fahrenheit ke celcius\n";
    cout << "0. Keluar\n";
}

double celciusToFahrenheit(double c)
{
    return (c * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelcius(double f)
{
    return (f - 32.0) * 5.0 / 9.0;
}

void convertCelciusToFahrenheit()
{
    double c;

    cout << "Masukkan suhu celcius (derajat): ";
    cin >> c;

    double f = celciusToFahrenheit(c);
    cout << c << "℃ sama dengan " << f << "℉" << endl;
}

void convertFahrenheitToCelcius()
{
    double f;

    cout << "Masukkan suhu fahrenheit (derajat): ";
    cin >> f;

    double c = fahrenheitToCelcius(f);
    cout << f << "℉ sama dengan " << c << "℃" << endl;
}

int main()
{
    bool play = true;

    while (play)
    {
        int option;

        showMenu();
        cout << "Pilihan anda: ";
        cin >> option;

        if (option == 1)
            convertCelciusToFahrenheit();
        else if (option == 2)
            convertFahrenheitToCelcius();
        else if (option == 0)
            play = false;
        else
            cout << "Pilihan tidak ada!\n";
    }

    cout << endl;
    return 0;
}