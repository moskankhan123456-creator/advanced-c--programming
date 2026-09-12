#include <iostream>
using namespace std;

int main()
{
    int *number = new int(500);

    cout << "Value = " << *number << endl;

    delete number;

    number = nullptr;

    if (number == nullptr)
    {
        cout << "Pointer is null after deletion.";
    }

    return 0;
}