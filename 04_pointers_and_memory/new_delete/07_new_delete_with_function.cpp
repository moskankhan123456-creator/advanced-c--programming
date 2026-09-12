#include <iostream>
using namespace std;

void display(int *number)
{
    cout << "Value = " << *number;
}

int main()
{
    int *number = new int(200);

    display(number);

    delete number;

    return 0;
}