#include <iostream>
using namespace std;

int main () {

    int num, backwar = 0;

    cout << "Podaj liczbe: " << endl;
    cin >> num;

   while (num > 0) {
        backwar = backwar * 10 + num % 10;
        num /= 10;
    }

    cout << "Twoja liczba wspak to: " << backwar;
    return 0;
}