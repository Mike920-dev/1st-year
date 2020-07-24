#include <iostream>
using namespace std;

int main () {

    int num;

    do {
        cout << "Podaj liczbe z zakresu <1;9>: " << endl;
        cin >> num;
    }while (num < 1 or num > 9);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++){
            cout << i;
        }
        cout << ' ';
    }

    return 0;
}