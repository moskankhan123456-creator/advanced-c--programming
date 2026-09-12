#include <iostream>
using namespace std;

int main()
{
    int number = 10;

    int &ref = number;

    cout << "Value = " << ref;

    return 0;
}