#include <iostream>
using namespace std;

int main()
{
    int number = 50;

    int *ptr = &number;

    cout << "Pointer value = " << *ptr;

    return 0;
}