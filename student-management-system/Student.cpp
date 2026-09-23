#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(int rollNumber, string name, float marks) {
    this->rollNumber = rollNumber;
    this->name = name;
    this->marks = marks;
}

int Student::getRollNumber() const {
    return rollNumber;
}

string Student::getName() const {
    return name;
}

float Student::getMarks() const {
    return marks;
}

char Student::getGrade() const {
   if (marks >= 90)
    return 'A';
else if (marks >= 75)
    return 'B';
else if (marks >= 60)
    return 'C';
else if (marks >= 40)
    return 'D';
else
    return 'F';
}

void Student::display() const {
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << getGrade() << endl;
}