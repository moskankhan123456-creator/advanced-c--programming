#include <iostream>
using namespace std;

int main()
{
    int *number = new int(150);

    cout << "Value = " << *number << endl;

    delete number;

    number = nullptr;

    if (number == nullptr)
    {
        cout << "Memory safely released.";
    }

    return 0;
}