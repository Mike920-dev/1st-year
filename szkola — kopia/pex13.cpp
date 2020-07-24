#include <iostream>
using namespace std;

int main () {

    unsigned long long beg;
    unsigned long long step;
    unsigned long long elements;

    cout << "Ciag arytmetyczny" << endl;

    cout << "Podaj liczbe naturalna jako poczatek ciagu: " << endl;
    cin >> beg;

    cout << "Podaj krok ciagu: " << endl;
    cin >> step;

    cout << "Podaj liczbe elementow do wyswietlenia: " << endl;
    cin >> elements;

    cout << endl << beg << ' ';

    for (int i = 1; i < elements; i++) {
        beg += step;
        if (beg > 18446744073709551614) {
            cout << endl << "Kolejny element jest wiekszy od obslugiwanej wartosci" << endl;
            break;
        }
        cout << beg << ' ';
    }

    return 0;
}