#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int target = 30;
    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == target)
        {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found.";
    }

    return 0;
}