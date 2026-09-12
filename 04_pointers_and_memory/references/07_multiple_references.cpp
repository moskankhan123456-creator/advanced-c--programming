#include <iostream>
using namespace std;

int main()
{
    int number = 100;

    int &ref1 = number;
    int &ref2 = number;

    cout << "Reference 1 = " << ref1 << endl;
    cout << "Reference 2 = " << ref2;

    return 0;
}