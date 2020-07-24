#include <iostream>
using namespace std;

// bool iffirstt (int num) {
//     if (num < 2 )
//         return false;
//     for (int i = 2; i * i <= num; i++) {
//         if (i % 2 == 0)
//             return false;
//         return true;
//     }
// }
int main () {

    int left, right;
    bool decision = true;

    do {
        cout << "Podaj lewy kraniec zakresu: " << endl;
        cin >> left;
    }while (left < 1);

    do {
        cout << "Podaj prawy kraniec zakresu: " << endl;
        cin >> right;
    }while (left > right);

    cout << "Liczby pierwsze z zakresu " << "<" << left << ';' << right << '>' << endl;
    // for (int i = left; i <= right; i++) {
    //         if (iffirstt(i)){
    //             cout << i << ' ';

    //         }
    // }

    for (int i = left; i <= right; i++) {
        decision = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                decision = false;
                break;
            }
        }
        if (decision)
            cout << i << ' ';
    }


    return 0;
}