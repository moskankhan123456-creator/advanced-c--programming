#include <iostream>
using namespace std;

int main()
{
    int *number = new int(100);

    cout << "Value = " << *number;

    delete number;

    return 0;
}