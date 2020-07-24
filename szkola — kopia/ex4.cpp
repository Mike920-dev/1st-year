#include <iostream>
using namespace std;

int main () {

    float first, second, percent;
    

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> first;

    cout << "Podaj druga liczbe: " << endl;
    cin >> second;

    percent = (first * second / 100 );

    cout << second << '%' << " z liczby " << first << " wynosi: " << percent;



    return 0;
}