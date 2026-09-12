#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int *numbers = new int[size];

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum = " << sum;

    delete[] numbers;

    return 0;
}