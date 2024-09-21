//1-MAY-2024
//Mohammad Mukedas
//2023-BSAI-008
//OOP ASSIGNMENT
//Implement a C++ class named Employee with the following specifications:
//The class should have private data members name (string), id (integer), and salary (floatingpoint).
//Implement a static data member totalEmployees to keep track of the total number of
//employees.
//Implement a static member function averageSalary() that calculates and returns the average
//salary of all employees.
//Provide member functions to set and get the values of name, id, and salary.
//Implement a constructor to initialize the name, id, and salary of an employee.
//Implement a destructor to decrement the totalEmployees count when an object is destroyed.
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
    Employee(string name, int id, float salary) : name(name), id(id), salary(salary) {
        totalEmployees++;
        totalSalary += salary;
    }
    ~Employee() {
        totalEmployees--;
        totalSalary -= salary;
    }
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
    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    float getSalary() const {
        return salary;
    }
    static float averageSalary() {
        if (totalEmployees == 0) {
            return 0.0f;
        }
        return totalSalary / totalEmployees;
    }
};
int Employee::totalEmployees = 0;
float Employee::totalSalary = 0.0f;

int main() {
    Employee F1("muqadas", 1, 60000);
    Employee F2("noor", 2, 30000);

    cout << "Total employees: " << Employee::totalEmployees << endl;
    cout << "Average salary: $" << Employee::averageSalary() << endl;

    return 0;
}
