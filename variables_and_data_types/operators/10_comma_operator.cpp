#include <iostream>
using namespace std;

int main() {
    int first, second;

    first = (second = 20, second + 10);

    cout << "First: " << first << endl;
    cout << "Second: " << second << endl;

    return 0;
}
