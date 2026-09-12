#include <iostream>
using namespace std;

void greet(string name = "Student")
{
    cout << "Hello, " << name;
}

int main()
{
    greet();
    cout << endl;
    greet("Dua");

    return 0;
}