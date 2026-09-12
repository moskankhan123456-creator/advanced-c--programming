#include <iostream>
using namespace std;

int main()
{
    int number = 25;

    int &ref = number;

    cout << "Original value = " << number << endl;
    cout << "Reference value = " << ref;

    return 0;
}