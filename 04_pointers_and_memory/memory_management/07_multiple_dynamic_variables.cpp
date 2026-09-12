#include <iostream>
using namespace std;

int main()
{
    int *first = new int(10);
    int *second = new int(20);

    cout << "First = " << *first << endl;
    cout << "Second = " << *second;

    delete first;
    delete second;

    first = nullptr;
    second = nullptr;

    return 0;
}