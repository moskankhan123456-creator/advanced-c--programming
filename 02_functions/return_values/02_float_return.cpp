#include <iostream>
using namespace std;

double calculateAverage(double a, double b)
{
    return (a + b) / 2;
}

int main()
{
    double average = calculateAverage(80, 90);

    cout << "Average = " << average;

    return 0;
}