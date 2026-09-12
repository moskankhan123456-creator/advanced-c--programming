#include <iostream>
using namespace std;

int globalValue = 100;

int main() {
    int localValue = 50;

    {
        int blockValue = 25;

        cout << "Global Value: " << globalValue << endl;
        cout << "Local Value: " << localValue << endl;
        cout << "Block Value: " << blockValue << endl;
    }

    cout << "Local Value After Block: " << localValue << endl;

    return 0;
}
