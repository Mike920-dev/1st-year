#include <iostream>
using namespace std;

int main () {

    cout << "Petla for " << endl;

    for (int i = 0; i < 100; i++) {
        cout << i << ' ';
    }

    cout << endl << "Petla while: " << endl;

    int counter = 0;
    while (counter < 100) {
        cout << counter << ' ';
        counter++;
    }
        
    return 0;
}