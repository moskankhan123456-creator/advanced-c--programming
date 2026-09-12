#include <iostream>
using namespace std;

int main()
{
    int matrix[2][2] = {
        {10, 20},
        {30, 40}
    };

    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum += matrix[i][j];
        }
    }

    cout << "Sum = " << sum;

    return 0;
}