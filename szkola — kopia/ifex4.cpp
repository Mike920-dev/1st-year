#include <iostream>
using namespace std;

int main () {

    float weight, height, bmi;

    cout << "Podaj swoj wzrost w centymetrach: " << endl;
    cin >> height;

    cout << "Podaj swoja wage w kilogramach: " << endl;
    cin >> weight;

    bmi = weight /  ((height / 100) * (height / 100));

    if (bmi < 18)
        cout << "Niedowaga!";
    else if (bmi > 18 && bmi < 24)
        cout << "Norma!";
    else if (bmi > 24 && bmi < 29)
        cout << "Nadwaga!";
    else if (bmi > 29 && bmi < 39)
        cout << "Otylosc!";
    else 
        cout << "Powazna otylosc!";
    return 0;
}