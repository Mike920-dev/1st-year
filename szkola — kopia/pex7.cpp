#include <iostream>
using namespace std;

int main () {

    int num;
    unsigned long long factorial = 1;

    do {
        cout << "Podaj liczbe nie wieksza niz 20!:" << endl;
        cin >> num;
    }while (num < 0 || num > 20);

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << num << '!' << ' ' << '=' << ' ' << factorial;




    return 0;
}