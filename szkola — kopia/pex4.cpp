#include <iostream>
using namespace std;

int main () {

    int num, sum = 0;

    do {
        cout << "Podaj liczbe: "  << endl;
        cin >> num;
        sum += num;
    }while (num != 0);

    cout << "Suma podanych liczb to: " << endl;
    cout << sum;
    return 0;
}