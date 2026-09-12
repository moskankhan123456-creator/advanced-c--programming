#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    cout << "Integer result = " << multiply(5, 4) << endl;
    cout << "Double result = " << multiply(2.5, 4.0);

    return 0;
}