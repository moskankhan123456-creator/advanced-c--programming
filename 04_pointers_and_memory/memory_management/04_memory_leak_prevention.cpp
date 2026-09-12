#include <iostream>
using namespace std;

int main()
{
    int *number = new int(50);

    cout << "Value = " << *number << endl;

    delete number;

    number = nullptr;

    cout << "Memory released.";

    return 0;
}