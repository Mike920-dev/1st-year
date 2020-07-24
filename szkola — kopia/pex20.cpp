#include <iostream>
using namespace std;

int main () {

    int tms,  num, i;

    cout << "Podaj liczbe: " << endl;
    cin >> num;

    cout << "Z  podanej liczby powstaje nastepujacy ciag: " << endl;
    cout << num << ' ';

    while(num > 9) {
        i = num;
        tms = 1;
        while(i > 0) {
            tms *= i % 10;
            i /= 10;
        }
        num = tms;        
        cout << tms << ' ';
    }


    return 0;
}