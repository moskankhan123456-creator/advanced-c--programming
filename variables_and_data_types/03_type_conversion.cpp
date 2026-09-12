#include <iostream>
using namespace std;

int main() {
    int number = 10;
    double result = number;

    double price = 99.75;
    int convertedPrice = static_cast<int>(price);

    cout << "Original Integer: " << number << endl;
    cout << "Integer to Double: " << result << endl;
    cout << "Original Double: " << price << endl;
    cout << "Double to Integer: " << convertedPrice << endl;

    return 0;
}
