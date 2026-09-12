#include <iostream>
using namespace std;

void count(int number)
{
    if (number == 0)
        return;

    cout << number << endl;
    count(number - 1);
}

int main()
{
    count(5);

    return 0;
}