#include <iostream>
using namespace std;

int main () {

    cout << "Ciag Fibonacciego" << endl;

    //Number Of Elements
    int noe;

    do {
        cout << "How many elements?: " <<endl;
        cin >> noe;
    }while(noe > 70 or noe < 2);

    int tab[noe];

    cout << "Ciag Fibonacciego: " << endl;

    tab[0] = 0;
    tab[1] = 1;
    for (int i = 2; i < noe; i++) 
            tab[i] = tab[i - 1] + tab[i - 2];
    

    cout << '1' << ' ' << tab[0] << endl;
    cout << '2' << ' ' << tab[1] << endl;

    for (int i = 2 ;i < noe; i++) {
        cout << i + 1 << ' ' << tab[i] << endl;
    }


}