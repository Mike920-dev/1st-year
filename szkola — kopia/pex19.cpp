#include <iostream>
using namespace std;

int main () {

    int score;

    for (int i = 1; i <= 10; i++) {
        score = i;
        for (int j = 1; j < i; j++) 
            score *= i;
        cout << score << ' ';
        
    }

    return 0;
}