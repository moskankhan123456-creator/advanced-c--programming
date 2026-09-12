#include <iostream>
using namespace std;

int main() {
    int number = 10;
    double decimal = 5.5;
    char character = 'A';

    cout << "Size of int: " << sizeof(number) << " bytes" << endl;
    cout << "Size of double: " << sizeof(decimal) << " bytes" << endl;
    cout << "Size of char: " << sizeof(character) << " byte" << endl;

    return 0;
}
