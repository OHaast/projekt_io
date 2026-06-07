#include <iostream>

using namespace std;

unsigned long long silnia(int n)
{
    unsigned long long wynik = 1;

    for(int i = 1; i <= n; i++)
    {
        wynik *= i;
    }

    return wynik;
}

int main()
{
    int wybor;
    int liczba;

    cout << "MENU\n";
    cout << "1. Silnia\n";
    cout << "0. Wyjscie\n";

    cin >> wybor;

    switch(wybor)
    {
        case 1:
            cout << "Podaj liczbe: ";
            cin >> liczba;

            cout << "Silnia = "
                 << silnia(liczba)
                 << endl;
            break;

        case 0:
            break;

        default:
            cout << "Niepoprawny wybor\n";
    }

    return 0;
}