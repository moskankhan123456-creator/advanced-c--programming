#include <iostream>
using namespace std;

int main()
{
    int stackValue = 10;

    int *heapValue = new int(20);

    cout << "Stack value = " << stackValue << endl;
    cout << "Heap value = " << *heapValue;

    delete heapValue;

    return 0;
}