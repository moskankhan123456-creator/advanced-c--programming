#include <iostream>
using namespace std;

int main()
{
    int number = 25;
    int *ptr = &number;

    cout << "Value = " << *ptr;

    return 0;
}