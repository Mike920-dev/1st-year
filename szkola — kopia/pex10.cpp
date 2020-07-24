#include <iostream>
using namespace std;

int main () {

    int num;
    bool des = true;

    cout << "Podaj liczbe naturalna: " << endl;
    cin >> num;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0){
            des = false;
            break;
        }
    }
    
    cout << "Liczba " << num << " jest liczba ";

    if (des)
        cout << "pierwsza.";
    else
        cout << "zlozona.";

    return 0;
}