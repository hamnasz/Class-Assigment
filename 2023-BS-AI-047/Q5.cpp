// File: laiba_5th_program.cpp
// Date: 02-05-2024
// Name: LAIBA FATIMA
// Registration No: 2023-BS-AI-O47
/* Question Statement :Create a class employee which stores is name, ID and salary of an employee by user input.
 The ID should be generated upon the creation of object, starting from 1. Include all the constructors and
  destructor in the class. Create one object using each of the constructors and display it. 
*/

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    static int idCounter_OF_LAIBA; // static counter for generating unique IDs
    int id_OF_LAIBA;
    string name_OF_LAIBA;
    double salary_OF_LAIBA;

public:
    // Default constructor
    Employee() {
        id_OF_LAIBA = ++idCounter_OF_LAIBA;
        name_OF_LAIBA = "LAIBA FATIMA";
        salary_OF_LAIBA = 78000;
    }

    // Parameterized constructor
    Employee(string empName, double empSalary) {
        id_OF_LAIBA = ++idCounter_OF_LAIBA;
        name_OF_LAIBA = empName;
        salary_OF_LAIBA = empSalary;
    }

    // Destructor
    ~Employee() {
        cout << "Destructor called for employee " << id_OF_LAIBA << endl;
    }

    // Copy constructor
    Employee(const Employee& other) {
        id_OF_LAIBA = ++idCounter_OF_LAIBA;
        name_OF_LAIBA = other.name_OF_LAIBA;
        salary_OF_LAIBA = other.salary_OF_LAIBA;
    }

    // Display employee information
    void display() const {
        cout << "Employee ID: " << id_OF_LAIBA << endl;
        cout << "Name: " << name_OF_LAIBA << endl;
        cout << "Salary: $" << salary_OF_LAIBA << endl;
    }
};

// Initialize static member outside the class definition
int Employee::idCounter_OF_LAIBA = 0;

int main() {
    // Creating objects using different constructors
    Employee emp1; // Default constructor
    Employee emp2("MUKEDAS", 50000); // Parameterized constructor
    Employee emp3 = emp2; // Copy constructor

    // Displaying employee information
    cout << "Employee 1:" << endl;
    emp1.display();
    cout << endl;

    cout << "Employee 2:" << endl;
    emp2.display();
    cout << endl;

    cout << "Employee 3:" << endl;
    emp3.display();
    cout << endl;

    return 0;
}
