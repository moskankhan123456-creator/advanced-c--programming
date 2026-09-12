#include <iostream>
using namespace std;

int main() {
    int integerValue;
    double decimalValue;
    char characterValue;
    bool booleanValue;

    cout << "Size of int: " << sizeof(integerValue) << " bytes" << endl;
    cout << "Size of double: " << sizeof(decimalValue) << " bytes" << endl;
    cout << "Size of char: " << sizeof(characterValue) << " byte" << endl;
    cout << "Size of bool: " << sizeof(booleanValue) << " byte" << endl;

    return 0;
}
