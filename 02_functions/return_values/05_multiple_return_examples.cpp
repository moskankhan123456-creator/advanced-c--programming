#include <iostream>
using namespace std;

int square(int number)
{
    return number * number;
}

int cube(int number)
{
    return number * number * number;
}

int main()
{
    cout << "Square = " << square(5) << endl;
    cout << "Cube = " << cube(5);

    return 0;
}