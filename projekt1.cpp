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

    cout << "MENU\n";
    cout << "0. Wyjscie\n";
    cin >> wybor;

    return 0;
}