#include <iostream>
#include <string>
using namespace std;

// Represents a student with encapsulation and abstraction
class Student {
private:
    string name;
    int age;
    string rollNo;
    float gpa;

public:
    // Constructors
    Student();
    Student(string name, int age, string rollNo, float gpa = 0.0);
    ~Student();

    // Getters & Setters
    void setName(string name);
    string getName() const;

    void setAge(int age);
    int getAge() const;

    void setRollNo(string rollNo);
    string getRollNo() const;

    void setGpa(float gpa);
    float getGpa() const;

    // Methods
    void displayInfo() const;
    string calculateGrade() const;
    void setStudentInfo(string name, int age, string rollNo, float gpa);
};
