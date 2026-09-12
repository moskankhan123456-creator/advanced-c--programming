#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (cin.fail()) {
        cout << "Invalid input." << endl;
    } else if (age < 0) {
        cout << "Age cannot be negative." << endl;
    } else {
        cout << "Valid age: " << age << endl;
    }

    return 0;
}
