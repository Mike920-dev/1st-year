#include <iostream>
using namespace std;

int main () {

    int element = 2, elements;

    cout << "Ciag przemienny :-)" << endl;

    cout << "Podaj ilosc elementow do wyswietlenia: " << endl;
    cin >> elements;

    cout << "Ciag przemienny: " << endl;
    cout << element << ' ';
    for (int i = 2; i <= elements; i++) {
        if (i % 2 == 0) 
            element += i/2;
        else
            element *= i/2;

        cout << element << ' ';
        
    }

    return 0;
}