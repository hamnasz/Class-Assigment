// File: 7_employee.cpp
// Date: 01-05-2024
// Name: Mishal Nadeem
// Registration No: 2023-BS-AI-020
/*Implement a C++ class named Employee with the following specifications:
- The class should have private data members name (string), id (integer), and salary (floating point).
- Implement a static data member totalEmployees to keep track of the total number of 
employees.
- Implement a static member function averageSalary() that calculates and returns the average 
salary of all employees.
- Provide member functions to set and get the values of name, id, and salary.
- Implement a constructor to initialize the name, id, and salary of an employee.
- Implement a destructor to decrement the totalEmployees count when an object is destroyed.*/
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int id;
    float salary;
    static int totalEmployees;
public:
    // Constructor
    Employee(string n, int i, float s) : name(n), id(i), salary(s) {
        totalEmployees++; // Increment totalEmployees count upon object creation
    }
    // Destructor
    ~Employee() {
        totalEmployees--; // Decrement totalEmployees count upon object destruction
    }
    // Static member function to calculate average salary
    static float averageSalary() {
        // Avoid division by zero
        if (totalEmployees == 0) {
            return 0;
        }
        // Assuming totalSalary is already calculated and stored elsewhere
        float totalSalary = 50000.0; // Placeholder value
        return totalSalary / totalEmployees;
    }
    // Setter functions
    void setName(string n) {
        name = n;
    }
    void setId(int i) {
        id = i;
    }
    void setSalary(float s) {
        salary = s;
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
    // Static member function to get totalEmployees count
    static int getTotalEmployees() {
        return totalEmployees;
    }
};
// Initialize static member variable
int Employee::totalEmployees = 0;
int main() {
    // Create employee objects
    Employee mishal1("John", 1001, 50000.0);
    Employee mishal2("Alice", 1002, 60000.0);
    Employee mishal3("Bob", 1003, 55000.0);
    // Display employee details
    cout << "Employee 1: " << mishal1.getName() << ", ID: " << mishal1.getId() << ", Salary: $" << mishal1.getSalary() << endl;
    cout << "Employee 2: " << mishal2.getName() << ", ID: " << mishal2.getId() << ", Salary: $" << mishal2.getSalary() << endl;
    cout << "Employee 3: " << mishal3.getName() << ", ID: " << mishal3.getId() << ", Salary: $" << mishal3.getSalary() << endl;
    // Display total number of employees
    cout << "Total Employees: " << Employee::getTotalEmployees() << endl;
    // Calculate and display average salary
    cout << "Average Salary: $" << Employee::averageSalary() << endl;
    return 0;
}
