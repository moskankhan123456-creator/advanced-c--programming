#include <iostream>
using namespace std;

int globalValue = 100;

void display()
{
    int localValue = 50;

    cout << "Global Value = " << globalValue << endl;
    cout << "Local Value = " << localValue;
}

int main()
{
    display();

    return 0;
}