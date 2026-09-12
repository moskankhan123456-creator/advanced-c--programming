#include <iostream>
using namespace std;

int getNumber()
{
    return 50;
}

int main()
{
    int number = getNumber();

    cout << "Number = " << number;

    return 0;
}