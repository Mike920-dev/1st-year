#include <iostream>
using namespace std;

int main () {

    int var1, var2;
    int field = 0;
    int cir = 0;

    cout << "Podaj 1. bok: " << endl;
    cin >> var1;

    cout << "Podaj 2. bok: " << endl;
    cin >> var2;

    field += var1 * var2;
    cir += 2 * var1 + 2 * var2;

    cout << "Pole: " << field << ", obwod: " << cir;

    return 0;
}