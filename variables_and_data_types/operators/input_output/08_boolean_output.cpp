#include <iostream>
using namespace std;

int main() {
    bool isStudent = true;
    bool hasCompletedCourse = false;

    cout << "Default Boolean Output: " << isStudent << endl;

    cout << boolalpha;
    cout << "Is Student: " << isStudent << endl;
    cout << "Course Completed: " << hasCompletedCourse << endl;

    return 0;
}
