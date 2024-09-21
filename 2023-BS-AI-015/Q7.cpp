//file: file eman.cpp
//date: 1-05-2024
//name: eman tahir
//reg no. 2023-bs-ai-015
//question statement:Implement a C++ class named Employee with the following specifications:
//"	The class should have private data members name (string), id (integer), and salary (floating-point).
//"	Implement a static data member totalEmployees to keep track of the total number of employees.
//"	Implement a static member function averageSalary() that calculates and returns the average salary of all employees.
//"	Provide member functions to set and get the values of name, id, and salary.
//"	Implement a constructor to initialize the name, id, and salary of an employee.
//"	Implement a destructor to decrement the totalEmployees count when an object is destroyed

#include <iostream>
using namespace std;
class eman {
private:
    string name;
    int id;
    double salary;

public:
    static int totalEmployees;
    static double totalSalary;

    eman(string name, int id, double salary) : name(name), id(id), salary(salary) {
        totalEmployees++;
        totalSalary += salary;
    }


    static double averageSalary() {
        return totalSalary / totalEmployees;
    }

    int Name(string name) {
        this->name = name;
    }

    string Name() const {
        return name;
    }

    int setId(int id) {
        this->id = id;
    }

    int getId() const {
        return id;
    }

    int setSalary(double salary) {
        this->salary = salary;
        totalSalary = totalSalary - salary + this->salary; // update totalSalary
    }

    double Salary() const {
        return salary;
    }
};

int eman::totalEmployees = 0;
double eman::totalSalary = 0.0;

int main() {
    eman e1("a", 1, 5000.0);
    eman e2("b", 2, 6000.0);

    cout << "Average salary: " << eman::averageSalary() << endl;

    return 0;
}

