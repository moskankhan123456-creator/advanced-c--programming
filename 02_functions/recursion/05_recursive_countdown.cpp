#include <iostream>
using namespace std;

void countdown(int number)
{
    if (number < 1)
        return;

    cout << number << endl;
    countdown(number - 1);
}

int main()
{
    countdown(10);

    return 0;
}