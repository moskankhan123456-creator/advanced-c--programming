#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int result = multiply(6, 7);

    cout << "Result = " << result;

    return 0;
}