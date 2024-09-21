// File: problem 5 assignment no 3 oop.cpp
// Date: 01-05-2024
// Name: Ayesha Imran
// Registration No: 2023-BS-AI-057
/*Create a class employee which stores is name, ID and salary of an employee by user input. 
The ID should be generated upon the creation of object, starting from 1. 
Include all the constructors and destructor in the class. 
Create one object using each of the constructors and display it.*/
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    static int nextID; // Static variable to track the next available ID
    int ID;
    string name;
    double salary;

public:
    // Default constructor
    Employee() {
        ID = ++nextID;
        name = "Ayesha";
        salary = 3900000;
    }

    // Parameterized constructor
    Employee(const string& empName, double empSalary) {
        ID = ++nextID;
        name = empName;
        salary = empSalary;
    }

    // Destructor
    ~Employee() {
        cout << "Destructor called for Employee: " << name <<endl;
    }

    // Copy constructor
    Employee(const Employee& other) {
        ID = ++nextID;
        name = other.name;
        salary = other.salary;
    }

    // Function to display employee details
    void display() const {
        cout << "Employee ID: " << ID <<endl;
        cout << "Employee Name: " << name <<endl;
        cout << "Employee Salary: $" << salary << endl;
    }
};

// Initializing static member variable
int Employee::nextID = 0;

int main() {
    // Creating objects using different constructors
    Employee emp1; // Default constructor
    Employee emp2("Maham", 50000); // Parameterized constructor
    Employee emp3 = emp2; // Copy constructor

    // Displaying objects
    cout << "Employee 1:" <<endl;
    emp1.display();
    cout << endl;

    cout << "Employee 2:" <<endl;
    emp2.display();
    cout <<endl;

    cout << "Employee 3 (Copy of Employee 2):" <<endl;
    emp3.display();

    return 0;
}
