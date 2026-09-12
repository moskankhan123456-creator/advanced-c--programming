#include <iostream>
using namespace std;

void display(int *ptr)
{
    cout << "Value = " << *ptr;
}

int main()
{
    int number = 100;

    display(&number);

    return 0;
}