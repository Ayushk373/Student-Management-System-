#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    int rollNo;
    string name;
    string branch;
    float cgpa;

    Student() {}

    Student(int roll, string n, string b, float c) {
        rollNo = roll;
        name = n;
        branch = b;
        cgpa = c;
    }
};

class StudentManagementSystem {
private:
    vector<Student> students;
    string filename = "students.txt";

public:

    void saveToFile() {
        ofstream file(filename);

        if (!file) {
            cout << "Error opening file!\n";
            return;
        }

        for (Student s : students) {
            file << s.rollNo << " "
                 << s.name << " "
                 << s.branch << " "
                 << s.cgpa << endl;
        }

        file.close();
    }

    void loadFromFile() {
        ifstream file(filename);

        if (!file) {
            return;
        }

        int roll;
        string name, branch;
        float cgpa;

        while (file >> roll >> name >> branch >> cgpa) {
            students.push_back(Student(roll, name, branch, cgpa));
        }

        file.close();
    }

    bool rollExists(int rollNo) {
        for (Student s : students) {
            if (s.rollNo == rollNo) {
                return true;
            }
        }

        return false;
    }

    void addStudent() {
        int roll;
        string name, branch;
        float cgpa;

        cout << "\nEnter Roll Number: ";
        cin >> roll;

        if (rollExists(roll)) {
            cout << "Student with this roll number already exists!\n";
            return;
        }

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter CGPA: ";
        cin >> cgpa;

        if (cgpa < 0 || cgpa > 10) {
            cout << "Invalid CGPA! CGPA must be between 0 and 10.\n";
            return;
        }

        students.push_back(Student(roll, name, branch, cgpa));

        saveToFile();

        cout << "Student added successfully!\n";
    }

    void displayStudents() {
        if (students.empty()) {
            cout << "\nNo students found!\n";
            return;
        }

        cout << "\n";
        cout << left
             << setw(10) << "Roll No"
             << setw(20) << "Name"
             << setw(15) << "Branch"
             << setw(10) << "CGPA" << endl;

        cout << string(55, '-') << endl;

        for (Student s : students) {
            cout << left
                 << setw(10) << s.rollNo
                 << setw(20) << s.name
                 << setw(15) << s.branch
                 << setw(10) << s.cgpa << endl;
        }
    }

    void searchStudent() {
        int roll;

        cout << "\nEnter Roll Number to search: ";
        cin >> roll;

        for (Student s : students) {
            if (s.rollNo == roll) {
                cout << "\nStudent Found!\n";
                cout << "-------------------------\n";
                cout << "Roll Number : " << s.rollNo << endl;
                cout << "Name        : " << s.name << endl;
                cout << "Branch      : " << s.branch << endl;
                cout << "CGPA        : " << s.cgpa << endl;
                return;
            }
        }

        cout << "Student not found!\n";
    }

    void updateStudent() {
        int roll;

        cout << "\nEnter Roll Number to update: ";
        cin >> roll;

        for (Student &s : students) {
            if (s.rollNo == roll) {

                cout << "Enter New Name: ";
                cin >> s.name;

                cout << "Enter New Branch: ";
                cin >> s.branch;

                cout << "Enter New CGPA: ";
                cin >> s.cgpa;

                if (s.cgpa < 0 || s.cgpa > 10) {
                    cout << "Invalid CGPA!\n";
                    return;
                }

                saveToFile();

                cout << "Student updated successfully!\n";
                return;
            }
        }

        cout << "Student not found!\n";
    }

    void deleteStudent() {
        int roll;

        cout << "\nEnter Roll Number to delete: ";
        cin >> roll;

        for (auto it = students.begin(); it != students.end(); ++it) {

            if (it->rollNo == roll) {
                students.erase(it);

                saveToFile();

                cout << "Student deleted successfully!\n";
                return;
            }
        }

        cout << "Student not found!\n";
    }

    void averageCGPA() {
        if (students.empty()) {
            cout << "\nNo student records available!\n";
            return;
        }

        float total = 0;

        for (Student s : students) {
            total += s.cgpa;
        }

        float average = total / students.size();

        cout << fixed << setprecision(2);
        cout << "\nAverage CGPA: " << average << endl;
    }

    void menu() {
        int choice;

        loadFromFile();

        do {
            cout << "\n";
            cout << "=====================================\n";
            cout << "      STUDENT MANAGEMENT SYSTEM\n";
            cout << "=====================================\n";
            cout << "1. Add Student\n";
            cout << "2. Display All Students\n";
            cout << "3. Search Student\n";
            cout << "4. Update Student\n";
            cout << "5. Delete Student\n";
            cout << "6. Calculate Average CGPA\n";
            cout << "7. Exit\n";
            cout << "=====================================\n";

            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {

                case 1:
                    addStudent();
                    break;

                case 2:
                    displayStudents();
                    break;

                case 3:
                    searchStudent();
                    break;

                case 4:
                    updateStudent();
                    break;

                case 5:
                    deleteStudent();
                    break;

                case 6:
                    averageCGPA();
                    break;

                case 7:
                    cout << "\nThank you for using Student Management System!\n";
                    break;

                default:
                    cout << "\nInvalid choice! Please try again.\n";
            }

        } while (choice != 7);
    }
};

int main() {

    StudentManagementSystem system;

    system.menu();

    return 0;
}
