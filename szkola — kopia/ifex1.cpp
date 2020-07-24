#include <iostream>
using namespace std;

int main () {

    int num;

    cout << "Podaj liczbe rzeczywista: " << endl;
    cin >> num;

    if (num < 0)
        num *= -1;

    cout << "Wartosc bezwzgledna: " << num << endl;

    return 0;
}