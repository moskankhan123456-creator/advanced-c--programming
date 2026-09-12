#include <iostream>
using namespace std;

int main()
{
    int *number = new int(200);

    cout << "Value = " << *number << endl;

    delete number;

    number = nullptr;

    if (number == nullptr)
    {
        cout << "Memory released.";
    }

    return 0;
}