#include <iostream>
using namespace std;

void display(int *number)
{
    cout << "Value = " << *number;
}

int main()
{
    int *number = new int(75);

    display(number);

    delete number;

    return 0;
}