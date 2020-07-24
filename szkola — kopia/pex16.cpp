#include <iostream>
using namespace std;

int main () {

    int elements;

    unsigned long long first = 0, second = 1, show;

    do {
        cout << "Podaj liczbe elementow ciagu: " << endl;
        cin >> elements;
    }while (elements > 70 or elements < 2);

    cout << "Ciag Fibonacciego: " << endl;

    cout << endl << "1 " << first << endl << "2 " << second << endl;

    for (int i = 0; i < elements - 2; i++) {
        show = first + second;
        cout << i + 3 << ' ' << show << endl;
        first = second;
        second = show;
    }

    return 0;
}