#include <iostream>
using namespace std;

int main()
{
    int number = 200;

    const int &ref = number;

    cout << "Value = " << ref;

    return 0;
}