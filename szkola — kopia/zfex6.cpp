#include <iostream>
using namespace std;

bool isFirst(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

bool greaterThan(int num)
{
    int prev = 10;

    while (num > 0)
    {
        if (num % 10 >= prev)
            return false;
        prev = num % 10;
        num /= 10;
    }
    return true;
}

int main()
{

    for (int i = 100; i <= 1000; i++)
    {
        if (isFirst(i) && greaterThan(i))
            cout << i << ' ';
    }

    return 0;
}