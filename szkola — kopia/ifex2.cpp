#include <iostream>
using namespace std;

int main () {

    int num = 25, num2;

    cout << "Podaj liczbe calkowita z zakresu <1;50>: " << endl;
    cin >> num2;

    if (num2 < 1 || num2 > 50)
        cout << "Liczba nie miesci sie w podanym zakresie!" << endl;
    else if (num2 < num)
        cout << "Twoja liczba jest mniejsza od mojej!" << endl;
    else if (num2 > num)
        cout << "Twoja liczba jest wieksza od mojej!" << endl;
    else
        cout << "Gratulacje! Odgadles moja liczbe!" << endl;


    return 0;
}