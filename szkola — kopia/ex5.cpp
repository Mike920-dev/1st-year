#include <iostream>
#include <math.h>
using namespace std;

int main () {

    //przyprostokatna1, przyprostokatna2, pole, obwod, przeciwprostokatna
    float first, second, fl, cir, third;

    //Prosba o to, zeby uzytkownik wprowadzil dlugosci przyprostokatnych
    cout << "Podaj 1. przyprostokatna: " << endl;
    cin >> first;

    cout << "Podaj 2. przyprostokatna: " << endl;
    cin >> second;

    //Obliczenia
    third = sqrt(first * first + second * second);
    fl = first * second / 2;
    cir = first + second + third;

    //final
    cout << "Pole tego trojkata wynosi: " << fl << endl;
    cout << "Obwod tego trojkata wynosi: " << cir << endl;
    cout << "Przeciwprostokatna tego trojkata wynosi: " << third << endl;



    return 0;
}