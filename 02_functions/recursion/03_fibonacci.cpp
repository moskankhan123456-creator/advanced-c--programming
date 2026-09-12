#include <iostream>
using namespace std;

int fibonacci(int number)
{
    if (number <= 1)
        return number;

    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    for (int i = 0; i < 7; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}