#include <iostream>
using namespace std;

int main()
{
    int numbers[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    cout << numbers[0][0][0];

    return 0;
}