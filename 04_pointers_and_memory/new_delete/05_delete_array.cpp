#include <iostream>
using namespace std;

int main()
{
    int *numbers = new int[3]{10, 20, 30};

    for (int i = 0; i < 3; i++)
    {
        cout << numbers[i] << " ";
    }

    delete[] numbers;

    numbers = nullptr;

    return 0;
}