#include <iostream>
using namespace std;

string getMessage()
{
    return "Welcome to C++ Functions";
}

int main()
{
    string message = getMessage();

    cout << message;

    return 0;
}