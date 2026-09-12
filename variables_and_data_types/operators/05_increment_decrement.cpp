#include <iostream>
using namespace std;

int main() {
    int value = 10;

    cout << "Original: " << value << endl;
    cout << "Pre-increment: " << ++value << endl;
    cout << "Post-increment: " << value++ << endl;
    cout << "After increment: " << value << endl;
    cout << "Pre-decrement: " << --value << endl;
    cout << "Post-decrement: " << value-- << endl;
    cout << "Final value: " << value << endl;

    return 0;
}
