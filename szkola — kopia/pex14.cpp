#include <iostream>
using namespace std;

int main () {

    unsigned long long beg, step, elements;

    cout << "Ciag geometryczny: " << endl;

    cout << "Podaj liczbe naturalnas jako poczatek ciagu: " << endl;
    cin >> beg;

    cout << "Podaj krok ciagu: " << endl;
    cin >> step;

    cout << "Podaj liczbe elementow do wyswietlenia: " << endl;
    cin >> elements;

    cout << endl << "Ciag geometryczny: " << endl;

    cout << beg << ' ';
    for (int i = 1; i < elements; i++) {
        beg *= step;
        if ( beg > 1844674407370955161) {
            cout << "Podana liczba jest wieksza od maksymalne jwartosci zmiennej unsigned long long";
            break;
        }
        cout << beg << ' ';
    }


    return 0;
}