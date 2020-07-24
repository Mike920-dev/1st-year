#include <iostream>
using namespace std;

bool isfirst(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

bool ispalindromic(int num)
{
    int back = 0;
    int x = num;

    while (num > 0)
    {
        back = back * 10 + num % 10;
        num /= 10;
    }

    if (back == x)
        return true;
    else
        return false;
}

int main()
{

    for (int i = 10; i <= 1000; i++)
    {
        if (isfirst(i) and ispalindromic(i))
            cout << i << ' ';
    }
    return 0;
}