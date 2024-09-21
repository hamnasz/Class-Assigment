// File: laiba_7th_program.cpp
// Date: 02-05-2024
// Name: LAIBA FATIMA
// Registration No: 2023-BS-AI-O47
/* Implement a C++ class named Employee with the following specifications:
~ The class should have private data members name (string), id (integer), and salary (floating point).
~ Implement a static data member totalEmployees to keep track of the total number of 
employees.
~ Implement a static member function averageSalary() that calculates and returns the average 
salary of all employees.
~ Provide member functions to set and get the values of name, id, and salary.
~ Implement a constructor to initialize the name, id, and salary of an employee.
~Implement a destructor to decrement the totalEmployees count when an object is destroyed.

*/
#include <iostream>
#include <string>

using namespace std;

class Employee_laiba {
private:
    string name;
    int id;
    float salary;
    static int totalEmployees;
    static float totalSalary;

public:
    // Constructor to initialize name, id, and salary
    Employee_laiba(string empName, int empId, float empSalary) : name(empName), id(empId), salary(empSalary) {
        totalEmployees++; // Increment totalEmployees count
        totalSalary += empSalary; // Add salary to totalSalary
    }

    // Destructor to decrement totalEmployees count when object is destroyed
    ~Employee_laiba() {
        totalEmployees--; // Decrement totalEmployees count
    }

    // Static member function to calculate and return average salary
    static float averageSalary() {
        if (totalEmployees == 0) {
            return 0; // Return 0 if there are no employees
        }
        return totalSalary / totalEmployees;
    }

    // Member functions to set and get name, id, and salary
    void setName(string empName) {
        name = empName;
    }

    string getName() const {
        return name;
    }

    void setId(int empId) {
        id = empId;
    }

    int getId() const {
        return id;
    }

    void setSalary(float empSalary) {
        totalSalary += empSalary - salary; // Adjust totalSalary for salary change
        salary = empSalary;
    }

    float getSalary() const {
        return salary;
    }
};

// Initialize static data members outside the class definition
int Employee_laiba::totalEmployees = 0;
float Employee_laiba::totalSalary = 0.0;

int main() {
    // Create Employee objects
    Employee_laiba emp1("Laiba", 1, 50000.0);
    Employee_laiba emp2("Mishal", 2, 60000.0);
    Employee_laiba emp3("taibah", 3, 55000.0);

    // Display employee information
    cout << "Employee 1:\nName: " << emp1.getName() << "\nID: " << emp1.getId() << "\nSalary: $" << emp1.getSalary() << endl;
    cout << "Employee 2:\nName: " << emp2.getName() << "\nID: " << emp2.getId() << "\nSalary: $" << emp2.getSalary() << endl;
    cout << "Employee 3:\nName: " << emp3.getName() << "\nID: " << emp3.getId() << "\nSalary: $" << emp3.getSalary() << endl;

    // Display average salary
    cout << "Average Salary: $" << Employee_laiba::averageSalary() << endl;

    return 0;
}
