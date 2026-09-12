#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    string city;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Full Name: " << fullName << endl;
    cout << "City: " << city << endl;

    return 0;
}
