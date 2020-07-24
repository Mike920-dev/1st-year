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

int sum(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (isFirst(i) && isFirst(sum(i)))
            cout << i << ' ';
    }
    return 0;
}