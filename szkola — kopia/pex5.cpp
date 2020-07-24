#include <iostream>
using namespace std;

int main () {

    int left, right, fake;

    cout << "Podaj wartosc lewego konca zakresu domknietego: " << endl;
    cin >> left;

    cout << "Podaj wartosc lewego konca zakresu domknietego: " << endl;
    cin >> right;

    //Jesli lewy koniec jest wiekszy od prawego, to zamianka lewy = prawy a prawy = lewy
    if (left > right) {
        fake = left;
        left = right;
        right = fake;
    }

    cout << endl << "Liczby z zakresu " << left << ';' << right << ':' << endl;
    
    for (int i = left; i <= right; i++){
        if (i % 4 == 3)
            cout << i << ' ';
    }

    return 0;
}