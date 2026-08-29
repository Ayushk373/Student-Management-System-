# Student-Management-System-
# 🎓 Student Management System

A simple and professional **Student Management System built using C++**.
This project demonstrates the practical use of **Object-Oriented Programming (OOP), STL Vector, File Handling, Functions, Iterators, and Input Validation**.

The system allows users to add, view, search, update, and delete student records through an easy-to-use console interface.

---

## 🚀 Features

* ➕ **Add Student**
* 📋 **Display All Students**
* 🔍 **Search Student by Roll Number**
* ✏️ **Update Student Details**
* 🗑️ **Delete Student**
* 📊 **Calculate Average CGPA**
* 💾 **File Storage**
* 🔄 **Automatically Load Previous Records**
* ⚠️ **Basic Input Validation**
* 🖥️ **Menu-Driven Console Interface**

---

## 🛠️ Technologies Used

| Technology        | Purpose                   |
| ----------------- | ------------------------- |
| **C++**           | Main programming language |
| **OOP**           | Project structure         |
| **STL Vector**    | Dynamic student storage   |
| **File Handling** | Permanent data storage    |
| **Functions**     | Modular programming       |
| **Iterators**     | Student deletion          |
| **Switch Case**   | Menu system               |

---

## 📂 Project Structure

```text
Student-Management-System/
│
├── main.cpp          # Main C++ source code
├── students.txt      # Student database
└── README.md         # Project documentation
```

---

## 🧠 Concepts Demonstrated

This project was created to practice important C++ programming concepts:

### Object-Oriented Programming

The project uses classes and objects to organize the application.

```cpp
class Student
{
    // Student information
};
```

and

```cpp
class StudentManagementSystem
{
    // Management operations
};
```

### STL Vector

Student records are dynamically stored using:

```cpp
vector<Student> students;
```

### File Handling

Student records are saved using:

```cpp
ofstream file(filename);
```

and loaded using:

```cpp
ifstream file(filename);
```

This allows student data to remain available even after closing the program.

---

## ⚙️ How to Run

### 1️⃣ Clone the Repository

```bash
git clone https://github.com/your-username/Student-Management-System.git
```

### 2️⃣ Open the Project

Open the project folder in **VS Code**, **CodeBlocks**, **Dev-C++**, or any C++ IDE.

### 3️⃣ Compile the Program

Using g++:

```bash
g++ main.cpp -o student_management
```

### 4️⃣ Run

On Windows:

```bash
student_management
```

On Linux/macOS:

```bash
./student_management
```

---

## 🖥️ Application Menu

```text
=====================================
      STUDENT MANAGEMENT SYSTEM
=====================================
1. Add Student
2. Display All Students
3. Search Student
4. Update Student
5. Delete Student
6. Calculate Average CGPA
7. Exit
=====================================
Enter your choice:
```

---

## 📊 Example

### Adding a Student

```text
Enter Roll Number: 101
Enter Name: Ayush
Enter Branch: CSE
Enter CGPA: 8.7

Student added successfully!
```

### Displaying Students

```text
Roll No   Name                Branch         CGPA
-------------------------------------------------------
101       Ayush               CSE            8.7
102       Rahul               IT             8.2
103       Aditya              AIML           9.1
```

### Average CGPA

```text
Average CGPA: 8.67
```

---

## 💾 Data Persistence

The application automatically stores student records inside:

```text
students.txt
```

For example:

```text
101 Ayush CSE 8.7
102 Rahul IT 8.2
103 Aditya AIML 9.1
```

When the program starts again, these records are automatically loaded.

---

## 🔮 Future Improvements

The current version is a basic console application. Future versions can include:

* 🎨 Graphical User Interface
* 🔐 Admin Login System
* 👨‍🎓 Student Login
* 📚 Subject-wise Marks
* 📈 Grade Calculation
* 📝 Attendance Management
* 🔎 Advanced Search
* 🔢 Sorting by CGPA
* 📊 Student Performance Reports
* 🗄️ MySQL Database
* 🌐 Web-Based Version
* 📱 Mobile Application

---

## 📈 Learning Outcomes

Through this project, I practiced:

* C++ programming
* Object-Oriented Programming
* Classes and Objects
* Constructors
* STL Vector
* File Handling
* Functions
* Loops and Conditions
* Switch Statements
* Iterators
* Basic Data Validation
* Git & GitHub project management

---

## 👨‍💻 Author

**Ayush Khude**

Engineering Student | C++ | DSA | OOP | Programming

---

## ⭐ Support

If you found this project useful, consider giving the repository a ⭐ on GitHub!

---

## 📜 License

This project is open-source and available for educational purposes.
