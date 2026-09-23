#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    int rollNumber;
    std::string name;
    float marks;

public:
    Student(int rollNumber, std::string name, float marks);

    int getRollNumber() const;
    std::string getName() const;
    float getMarks() const;

    char getGrade() const;
    void display() const;
};

#endif