#include <iostream>
using namespace std;

int main () {

    int num1, num2, nwd, sml;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> num1;

    cout << "Podaj druga liczbe: " << endl;
    cin >> num2;

    cout << "NWD " << num1 << " i " << num2 << " to: " << endl;

    while (num1 != num2) {
        if (num1 < num2)
            num2 = num2 - num1;
        else
            num1 = num1 - num2;
        nwd = num1;
    }
    cout << nwd;


    return 0;
}