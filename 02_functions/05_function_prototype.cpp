#include <iostream>
using namespace std;

int add(int, int);

int main()
{
    cout << "Sum = " << add(10, 20);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}