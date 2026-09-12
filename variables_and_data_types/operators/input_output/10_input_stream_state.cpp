#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (cin.good()) {
        cout << "Input was successful." << endl;
    } else {
        cout << "Input stream encountered an error." << endl;
    }

    return 0;
}
