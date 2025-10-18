#include "Student.h"
using namespace std;

// Default Constructor
Student::Student() {
    name = "Unknown";
    age = 0;
    rollNo = "N/A";
    gpa = 0.0;
    cout << "Default constructor called for " << name << endl;
}

// Parameterized Constructor
Student::Student(string name, int age, string rollNo, float gpa) {
    this->name = name;
    this->age = age;
    this->rollNo = rollNo;
    this->gpa = gpa;
    cout << "Parameterized constructor called for " << name << endl;
}

// Destructor
Student::~Student() {
    cout << "Destructor called for student: " << name << endl;
}

// Setters and Getters
void Student::setName(string name) { this->name = name; }
string Student::getName() const { return name; }

void Student::setAge(int age) { this->age = age; }
int Student::getAge() const { return age; }

void Student::setRollNo(string rollNo) { this->rollNo = rollNo; }
string Student::getRollNo() const { return rollNo; }

void Student::setGpa(float gpa) { this->gpa = gpa; }
float Student::getGpa() const { return gpa; }

// Display Info
void Student::displayInfo() const {
    cout << "Name: " << name
         << " | Age: " << age
         << " | Roll No: " << rollNo
         << " | GPA: " << gpa
         << " | Grade: " << calculateGrade() << endl;
}

// Grade Calculation
string Student::calculateGrade() const {
    if (gpa >= 3.7) return "A";
    else if (gpa >= 3.3) return "A-";
    else if (gpa >= 3.0) return "B+";
    else if (gpa >= 2.7) return "B";
    else if (gpa >= 2.3) return "B-";
    else if (gpa >= 2.0) return "C+";
    else if (gpa >= 1.7) return "C";
    else if (gpa >= 1.3) return "C-";
    else if (gpa >= 1.0) return "D";
    else return "F";
}

// Set full student info
void Student::setStudentInfo(string name, int age, string rollNo, float gpa) {
    setName(name);
    setAge(age);
    setRollNo(rollNo);
    setGpa(gpa);
}
