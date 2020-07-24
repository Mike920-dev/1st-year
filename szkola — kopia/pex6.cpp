#include <iostream>
using namespace std;

int main () {

    int num;

    cout << "Podaj liczbe calkowita: " << endl;
    cin >> num;

    cout << "Dzielnikami naturalnymi tej liczby sa: " << endl;
    

    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            cout << i << ' ';
    }

    return 0;
}