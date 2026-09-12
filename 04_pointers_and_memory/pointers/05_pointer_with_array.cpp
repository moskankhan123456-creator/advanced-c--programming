#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int *ptr = numbers;

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}