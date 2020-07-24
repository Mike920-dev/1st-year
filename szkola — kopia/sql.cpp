#include <iostream>
using namespace std;

int main () {

    int var1, var2;

    int cir = 0, circuit = 0;

    cout << "Give me the first side: " << endl;
    cin >> var1;

    cout << "Give me the second side: " << endl;
    cin >> var2;

    //pole
    cir += var1 * var2;
    //obwod
    circuit += 2 * var1 + 2 * var2;

    cout << "Field of this rectangle: " << cir << endl;
    cout << "Circuit of this rectangle: " << circuit << endl;


    return 0;
}