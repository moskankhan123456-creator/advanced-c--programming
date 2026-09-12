#include <iostream>
using namespace std;

int main()
{
    int number = 75;

    int *ptr = &number;
    int **ptr2 = &ptr;

    cout << "Value = " << **ptr2;

    return 0;
}