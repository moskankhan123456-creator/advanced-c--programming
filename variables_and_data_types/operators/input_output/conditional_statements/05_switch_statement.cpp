#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Enter a number from 1 to 3: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Option 1." << endl;
            break;

        case 2:
            cout << "You selected Option 2." << endl;
            break;

        case 3:
            cout << "You selected Option 3." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
