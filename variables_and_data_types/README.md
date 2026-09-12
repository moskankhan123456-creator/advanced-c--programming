#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 18;
    double cgpa = 3.25;
    char grade = 'A';
    bool isStudent = true;
    string name = "Muskan";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;
    cout << "Student: " << boolalpha << isStudent << endl;

    return 0;
}
