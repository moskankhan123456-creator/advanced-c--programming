#include <iostream>
using namespace std;

int main()
{
    int *number = new int(100);

    cout << "Value = " << *number << endl;

    delete number;

    number = nullptr;

    if (number == nullptr)
    {
        cout << "Pointer is safe after deletion.";
    }

    return 0;
}