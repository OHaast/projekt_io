#include <iostream>

using namespace std;

bool czyPierwsza(int n)
{
    if(n < 2)
    {
        return false;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int wybor;

    cout << "MENU\n";
    cout << "0. Wyjscie\n";
    cin >> wybor;

    return 0;
}