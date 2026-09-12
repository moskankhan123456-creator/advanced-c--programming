#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasID;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have an ID? (1 for Yes, 0 for No): ";
    cin >> hasID;

    if (age >= 18) {
        if (hasID) {
            cout << "Access granted." << endl;
        } else {
            cout << "ID is required." << endl;
        }
    } else {
        cout << "Access denied." << endl;
    }

    return 0;
}
