#include <iostream>
using namespace std;

int main () {

    float num1, num2;
    char sign;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> num1;

    cout << "Podaj znak dzialanjia: " << endl;
    cin >> sign;

    cout << "Podaj druga liczbe: " << endl;
    cin >> num2;

    switch (sign)
    {
    case '+':
        cout << endl << "Wynik dzialania " << num1 << '+' << num2 << " jest rowny: " << num1 + num2;
        break;
    case '-':
        cout << endl << "Wynik dzialania " << num1 << '-' << num2 << " jest rowny: " << num1 - num2;
        break;
    case '*':
        cout << endl << "Wynik dzialania " << num1 << '*' << num2 << " jest rowny: " << num1 * num2;
        break;
    case '/':
        cout << endl << "Wynik dzialania " << num1 << '/' << num2 << " jest rowny: " << num1 / num2;
        break;
    default:
         cout << endl << "Niepoprawny znak!";
        break;
    }

    return 0;
}