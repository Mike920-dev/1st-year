#include <iostream>
using namespace std;

int main () {

    int one, two;

    cout << "Podaj dzielna: " << endl;
    cin >> one;

    cout << "Podaj dzielnik: " <<endl;
    cin >> two;

    cout << "Iloraz calkowity liczb " << one << " i " << two << " wynosi: " << one / two << endl;
    cout << "Reszta z dzielenia: " << one % two;

    return 0;
}