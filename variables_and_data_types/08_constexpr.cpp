#include <iostream>
using namespace std;

constexpr int MAX_SIZE = 100;
constexpr double PI = 3.14159265359;

int main() {
    constexpr int number = 10;

    cout << "Compile-Time Constant: " << number << endl;
    cout << "Maximum Size: " << MAX_SIZE << endl;
    cout << "PI: " << PI << endl;

    return 0;
}
