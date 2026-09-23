#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;

int main() {
    vector<Student> students;

    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int rollNumber;
            string name;
            float marks;

            cout << "Enter Roll Number: ";
            cin >> rollNumber;

            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Marks: ";
            cin >> marks;

            students.emplace_back(rollNumber, name, marks);

            cout << "Student added successfully.\n";
        }

        else if (choice == 2) {
            if (students.empty()) {
                cout << "No student records found.\n";
            } else {
                cout << "\n===== Student Records =====\n";

                for (const Student& student : students) {
                    student.display();
                    cout << "-------------------------\n";
                }
            }
        }

        else if (choice == 3) {
            int rollNumber;
            cout << "Enter Roll Number to search: ";
            cin >> rollNumber;

            bool found = false;

            for (const Student& student : students) {
                if (student.getRollNumber() == rollNumber) {
                    student.display();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found.\n";
            }
        }

        else if (choice == 4) {
            cout << "Exiting program...\n";
        }

        else {
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}