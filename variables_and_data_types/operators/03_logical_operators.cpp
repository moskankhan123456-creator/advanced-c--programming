#include <iostream>
using namespace std;

int main() {
    int age = 20;
    bool hasID = true;

    cout << "age >= 18 && hasID: " << (age >= 18 && hasID) << endl;
    cout << "age >= 18 || hasID: " << (age >= 18 || hasID) << endl;
    cout << "!(age >= 18): " << !(age >= 18) << endl;

    return 0;
}
