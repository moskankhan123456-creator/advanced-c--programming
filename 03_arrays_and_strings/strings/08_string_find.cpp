#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "Artificial Intelligence";

    int position = text.find("Intelligence");

    cout << "Position = " << position;

    return 0;
}