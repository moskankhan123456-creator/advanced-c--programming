#include <iostream>
using namespace std;

int main() {
    double value = 25.89;

    int integerValue = static_cast<int>(value);

    cout << "Original Value: " << value << endl;
    cout << "After Type Casting: " << integerValue << endl;

    return 0;
}
