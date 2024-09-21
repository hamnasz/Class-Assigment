//ayesha imran
//2023-bsai-011
//oops

//Implement a C++ class named Employee with the following specifications:
//? The class should have private data members name (string), id (integer), and salary (floatingpoint).
//? Implement a static data member totalEmployees to keep track of the total number of
//employees.
//? Implement a static member function averageSalary() that calculates and returns the average
//salary of all employees.
//? Provide member functions to set and get the values of name, id, and salary.
//? Implement a constructor to initialize the name, id, and salary of an employee.
//? Implement a destructor to decrement the totalEmployees count when an object is destroyed
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int id;
    float salary;
    static int totalEmployees;
    static float totalSalary;

public:
    Employee(std::string _name, int _id, float _salary) {
        name = _name;
        id = _id;
        salary = _salary;
        totalEmployees++;
        totalSalary += _salary;
    }

    ~Employee() {
        totalEmployees--;
        totalSalary -= salary;
    }

    static float averageSalary() {
        if (totalEmployees == 0)
            return 0;
        return totalSalary / totalEmployees;
    }

    void setName(std::string _name) {
        name = _name;
    }

    std::string getName() const {
        return name;
    }

    void setId(int _id) {
        id = _id;
    }

    int getId() const {
        return id;
    }

    void setSalary(float _salary) {
        totalSalary -= salary;
        salary = _salary;
        totalSalary += salary;
    }

    float getSalary() const {
        return salary;
    }
};

int Employee::totalEmployees = 0;
float Employee::totalSalary = 0;

int main() {
    Employee emp1("ayesha imran", 1, 50000);
    Employee emp2("muqadas", 2, 60000);

    cout << "Average Salary: " << Employee::averageSalary() << endl;

    return 0;
}

