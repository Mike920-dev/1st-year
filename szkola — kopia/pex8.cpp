#include <iostream>
using namespace std;

int main () {

    int num, sum = 0, equ = 1;

    cout << "Podaj liczbe naturalna: " << endl;
    cin >> num;


    while (num > 0) {
        sum += num % 10;
        equ *= num % 10;
        num /= 10;
    }

    cout << "Suma cyfr liczby " << num << " jest rowna: " << sum;
    cout << endl << "Iloczyn cyfr liczby " << num << " jest rowny: " << equ;


    return 0;
}