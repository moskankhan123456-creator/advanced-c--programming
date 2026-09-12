#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int *numbers = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    int largest = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    cout << "Largest = " << largest;

    delete[] numbers;

    return 0;
}