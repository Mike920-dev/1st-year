#include <iostream>
using namespace std;

void name()
{
    cout << "*****     *****" << endl;
    cout << "***************" << endl;
    cout << "***************" << endl;
    cout << "*****     *****" << endl;
    cout << "*****     *****" << endl;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        name();
    }
    return 0;
}