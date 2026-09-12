#include <iostream>
using namespace std;

void show(int value)
{
    cout << "Integer: " << value << endl;
}

void show(string value)
{
    cout << "String: " << value << endl;
}

void show(double value)
{
    cout << "Double: " << value;
}

int main()
{
    show(25);
    show("C++");
    show(15.5);

    return 0;
}