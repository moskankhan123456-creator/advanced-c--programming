#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size: ";
    cin >> size;

    int *numbers = new int[size];

    for (int i = 0; i < size; i++)
    {
        numbers[i] = i + 1;
    }

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    delete[] numbers;

    return 0;
}