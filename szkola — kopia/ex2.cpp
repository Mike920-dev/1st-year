#include <iostream>
using namespace std;

int main () {

    //variable declaration
    float weight, height;
    float bmi;

    //ask
    cout << "Podaj swoj wzrost (cm):" << endl;
    cin >> height;

    cout << "Podaj swoja wage (kg): " << endl;
    cin >>weight;

    //quick math :-)
    bmi = weight / ((height / 100) * (height / 100));

    //final
    cout << "Twoje bmi to: " << bmi;

    return 0;
}