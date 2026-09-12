#include <iostream>
using namespace std;

int main() {
    int value = 10;

    value += 5;
    cout << "After += : " << value << endl;

    value -= 3;
    cout << "After -= : " << value << endl;

    value *= 2;
    cout << "After *= : " << value << endl;

    value /= 4;
    cout << "After /= : " << value << endl;

    value %= 3;
    cout << "After %= : " << value << endl;

    return 0;
}
