#include <iostream>
using namespace std;

void changeValue(int number)
{
    number = 100;
}

int main()
{
    int value = 50;

    changeValue(value);

    cout << "Value = " << value;

    return 0;
}