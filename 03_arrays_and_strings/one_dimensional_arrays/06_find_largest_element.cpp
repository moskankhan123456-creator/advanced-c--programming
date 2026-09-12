#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {25, 80, 45, 90, 60};
    int largest = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    cout << "Largest = " << largest;

    return 0;
}