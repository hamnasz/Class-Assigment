// File: 5_employee.cpp
// Date: 01-05-2024
// Name: Mishal Nadeem
// Registration No: 2023-BS-AI-020

//Create a class employee which stores is name, ID and salary of an employee by user input. The ID should be generated upon the creation of object, starting from 1. Include all the constructors and destructor in the class. Create one object using each of the constructors and display it.

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    static int nextID; // Static variable to generate unique IDs
    string name;
    int ID;
    double salary;

public:
    // Default constructor
    Employee() {
        ID = ++nextID;
        name = "Default";
        salary = 0.0;
    }

    // Parameterized constructor
    Employee(string n, double s) : name(n), salary(s) {
        ID = ++nextID;
    }

    // Copy constructor
    Employee(const Employee& emp) : name(emp.name), ID(emp.ID), salary(emp.salary) {}

    // Destructor
    ~Employee() {
        cout << "Destructor called for Employee " << ID << endl;
    }

    // Display function
    void display() const {
        cout << "Employee ID: " << ID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

// Initialize static variable
int Employee::nextID = 0;

int main() {
    // Default constructor
    Employee mishal1;
    cout << "Object created using default constructor:\n";
    mishal1.display();
    cout << endl;

    // Parameterized constructor
    Employee mishal2("John", 50000);
    cout << "Object created using parameterized constructor:\n";
    mishal2.display();
    cout << endl;

    // Copy constructor
    Employee mishal3 = mishal2;
    cout << "Object created using copy constructor:\n";
    mishal3.display();
    cout << endl;

    return 0;
}
