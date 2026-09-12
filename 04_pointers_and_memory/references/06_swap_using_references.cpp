#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int first = 10;
    int second = 20;

    swapNumbers(first, second);

    cout << "First = " << first << endl;
    cout << "Second = " << second;

    return 0;
}