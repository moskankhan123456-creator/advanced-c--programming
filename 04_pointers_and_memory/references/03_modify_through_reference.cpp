#include <iostream>
using namespace std;

int main()
{
    int number = 50;

    int &ref = number;

    ref = 100;

    cout << "Value = " << number;

    return 0;
}