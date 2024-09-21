// File: problem 7 assignment no 3 oop.cpp
// Date: 01-05-2024
// Name: Ayesha Imran
// Registration No: 2023-BS-AI-057
/*Implement a C++ class named Employee with the following specifications:
 The class should have private data members name (string), id (integer), and salary (floating-point).
 Implement a static data member totalEmployees to keep track of the total number of employees.
 Implement a static member function averageSalary() that calculates and returns the average salary of all employees.
 Provide member functions to set and get the values of name, id, and salary.
 Implement a constructor to initialize the name, id, and salary of an employee.
 Implement a destructor to decrement the totalEmployees count when an object is destroyed.*/
#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string name;
    int id;
    float salary;
    static int totalEmployees;
    static float totalSalary;

public:
    // Constructor
    Employee(string name, int id, float salary) : name(name), id(id), salary(salary) {
        totalEmployees++;
        totalSalary += salary;
    }

    // Destructor
    ~Employee() {
        totalEmployees--;
        totalSalary -= salary;
    }

    // Setter functions
    void setName(string name) {
        this->name = name;
    }

    void setId(int id) {
        this->id = id;
    }

    void setSalary(float salary) {
        totalSalary -= this->salary;
        this->salary = salary;
        totalSalary += this->salary;
    }

    // Getter functions
    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    float getSalary() const {
        return salary;
    }

    // Static member function to calculate average salary
    static float averageSalary() {
        if (totalEmployees == 0) {
            return 0.0f;
        }
        return totalSalary / totalEmployees;
    }
};

// Initialize static members
int Employee::totalEmployees = 0;
float Employee::totalSalary = 0.0f;

int main() {
    Employee F1("Ayesha Imran", 1, 98065.0);
    Employee F2("Maham Nisar", 2, 89078.0);

    cout << "Total employees: " << Employee::totalEmployees << endl;
    cout << "Average salary: $" << Employee::averageSalary() << endl;

    return 0;
}
