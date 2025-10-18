#include "Student.h"
using namespace std;

int main() {
    cout << "=== Student Information System ===" << endl;

    // Object 1: Using default constructor
    Student s1;
    s1.displayInfo();

    // Object 2: Using parameterized constructor
    Student s2("Ali", 20, "CS101", 3.8);
    s2.displayInfo();

    // Object 3: Using setter method
    Student s3;
    s3.setStudentInfo("Sara", 22, "CS102", 3.2);
    s3.displayInfo();

    cout << "\n=== Program Finished ===" << endl;
    return 0;
}
