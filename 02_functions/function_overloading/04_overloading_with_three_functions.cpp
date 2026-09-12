#include <iostream>
using namespace std;

void calculate(int a)
{
    cout << "Square = " << a * a << endl;
}

void calculate(int a, int b)
{
    cout << "Product = " << a * b << endl;
}

void calculate(int a, int b, int c)
{
    cout << "Sum = " << a + b + c;
}

int main()
{
    calculate(5);
    calculate(5, 4);
    calculate(5, 4, 3);

    return 0;
}