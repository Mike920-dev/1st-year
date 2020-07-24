#include <iostream>
#include <vector>
using namespace std;

int main () {

    cout << "Ciag Fibonacciego" << endl;

    //Number Of Elements
    int noe;

    do {
        cout << "How many elements?: " <<endl;
        cin >> noe;
    }while(noe > 70 or noe < 2);

    vector<int> tab;

   

    cout << "Ciag Fibonacciego: " << endl;

    tab.push_back(0);
    tab.push_back(1);

    for (int i = 2; i < noe; i++) 
            tab.push_back(tab[i - 1] + tab[i - 2]);
    
    cout << '1' << ' ' << tab[0] << endl;
    cout << '2' << ' ' << tab[1] << endl;

    for (int i = 2 ;i < noe; i++) {
        cout << i + 1 << ' ' << tab[i] << endl;
    }


}