#include <iostream>
using namespace std;

int main()
{
    int *number = new int(20);

    cout << "Value = " << *number;

    delete number;

    return 0;
}