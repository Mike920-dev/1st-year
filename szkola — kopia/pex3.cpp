#include <iostream>
using namespace std;

int main () {

    cout << "Petla for: " << endl;

    for (int i = 0; i < 100; i += 2) {
        cout << i << ' ';
    }


    cout << "Petla while: " << endl;

    int counter = 0;

    while (counter < 100) {
        cout << counter << ' ';
        counter += 2;
    }
    return 0;
}