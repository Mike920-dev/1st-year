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

bool sevenAndThree(int num)
{
    while (num > 0)
    {
        if (num % 10 != 3 && num % 10 != 7)
            return false;
        num /= 10;
    }
    return true;
}

int main()
{

    for (int i = 0; i <= 1000; i++)
    {
        if (isFirst(i) && sevenAndThree(i))
            cout << i << ' ';
    }
    return 0;
}