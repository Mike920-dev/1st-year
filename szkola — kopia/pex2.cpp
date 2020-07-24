#include <iostream>
using namespace std;

int main () {

    cout << "Petla for: " << endl;

    for (int i = 99; i >= 0; i--) {
        cout << i << ' ';
    }

    cout << endl << "Petla while: " << endl;

    int counter = 99;

    while (counter >= 0) {
        cout << counter << ' ';
        counter--;
    }

    return 0;
}