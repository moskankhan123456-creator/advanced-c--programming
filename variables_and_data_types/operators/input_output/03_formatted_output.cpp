#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price = 1250.56789;
    double percentage = 87.4567;

    cout << fixed << setprecision(2);

    cout << "Price: " << price << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
