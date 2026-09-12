#include <iostream>
using namespace std;

int main()
{
    int *number = new int;

    *number = 50;

    cout << "Value = " << *number;

    delete number;

    return 0;
}