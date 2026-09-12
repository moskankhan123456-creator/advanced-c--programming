#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Sum of two numbers = " << a + b << endl;
}

void add(int a, int b, int c)
{
    cout << "Sum of three numbers = " << a + b + c;
}

int main()
{
    add(10, 20);
    add(10, 20, 30);

    return 0;
}