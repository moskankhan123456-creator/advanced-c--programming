#include <iostream>
using namespace std;

void display(int number)
{
    cout << "Integer: " << number << endl;
}

void display(double number)
{
    cout << "Double: " << number;
}

int main()
{
    display(10);
    display(10.5);

    return 0;
}