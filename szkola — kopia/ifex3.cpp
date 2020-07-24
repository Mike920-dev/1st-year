#include <iostream>
using namespace std;

int main () {

    int num1, num2, n1, n2;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> num1;

    cout << "Podaj druga liczbe: " << endl;
    cin >> num2;

    n1 = num1;
    n2 = num2;

    if (num1 < 0)
        num1 *= -1;
    if (num2 < 0)
        num2 *= -1;


    cout << "Liczby w kolejnosci wartosci bezwzglednej: " << endl;

    if (num1 < num2)
        cout << n1 << ' ' << n2;
    else
        cout << n2 << ' ' << n1;

    
    return 0;
}