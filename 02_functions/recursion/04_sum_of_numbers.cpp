 #include <iostream>
using namespace std;

int sum(int number)
{
    if (number == 0)
        return 0;

    return number + sum(number - 1);
}

int main()
{
    cout << "Sum = " << sum(5);

    return 0;
}