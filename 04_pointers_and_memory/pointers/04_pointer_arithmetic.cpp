#include <iostream>
using namespace std;

int main()
{
    int numbers[3] = {10, 20, 30};
    int *ptr = numbers;

    cout << *ptr << endl;

    ptr++;

    cout << *ptr << endl;

    ptr++;

    cout << *ptr;

    return 0;
}