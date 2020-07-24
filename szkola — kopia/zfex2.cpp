#include <iostream>
using namespace std;

int field(int one, int two)
{
    int fld = one * two;

    return fld;
}

int obw(int one, int two)
{
    int l = 2 * one + 2 * two;

    return l;
}

int main()
{
    int first, second;

    cout << "Podaj dlugosc pierwszego boku: " << endl;
    cin >> first;

    cout << "Podaj dlugosc drugiego boku: " << endl;
    cin >> second;

    cout << "Pole prostokata o bokach " << first << ' ' << second << " jest rowne: " << field(first, second) << endl;
    cout << "Obwod prostokata o bokach " << first << ' ' << second << " jest rowne: " << obw(first, second);

    return 0;
}