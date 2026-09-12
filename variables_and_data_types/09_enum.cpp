#include <iostream>
using namespace std;

enum class Status {
    Pending,
    Active,
    Completed,
    Cancelled
};

int main() {
    Status currentStatus = Status::Active;

    if (currentStatus == Status::Active) {
        cout << "Current Status: Active" << endl;
    }

    return 0;
}
