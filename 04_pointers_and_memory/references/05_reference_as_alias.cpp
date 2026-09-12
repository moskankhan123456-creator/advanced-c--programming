#include <iostream>
using namespace std;

int main()
{
    int number = 75;

    int &alias = number;

    cout << "Number = " << number << endl;
    cout << "Alias = " << alias;

    return 0;
}