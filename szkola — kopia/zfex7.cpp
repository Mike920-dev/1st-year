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

int howMany(int num, int num2)
{
    int sum = 0;
    while (num > 0)
    {
        if (num % 10 == num2)
            sum++;
        num /= 10;
    }
    return sum;
}

int main()
{

    for (int i = 0; i < 10; i++)
    {
        int sum = 0;
        for (int j = 0; j <= 1000; j++)
            if (isFirst(j))
                sum += howMany(j, i);
        cout << "Cyfra" << i << " wystepuje " << sum << " razy." << endl;
    }

    return 0;
}