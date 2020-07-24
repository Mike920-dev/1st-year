#include <iostream>
using namespace std;

int main () {

    int num, copy, wspak, counter = 0;

    cout << "Podaj liczbe nauczyciela: " << endl;

    cin >> num;

    do{
        copy = num;
        wspak = 0;
        while (copy > 0) {
            wspak = wspak * 10 + copy % 10;
            copy /= 10;
        }
        if (num != wspak) {
            num = wspak + num;
            counter++;
        }
    }while(num != wspak);

    cout << endl << "Piotrus oddaje nauczycielowi liczbe: " << num << endl;
	cout << "Liczba dodawan: " << counter << endl;

    return 0;
}