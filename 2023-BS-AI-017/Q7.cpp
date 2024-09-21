/* File: Program no 7.cpp
Date: 01-05-2024
Name: Humna Imran
Registration No: 2023-BS-AI-O17

Question statement:
Implement a C++ class named Employee with the following specifications:
The class should have private data members name (string), id (integer), and salary (floating-point).
Implement a static data member totalEmployees to keep track of the total number of employees.
Implement a static member function averageSalary() that calculates and returns the average salary of all employees.
Provide member functions to set and get the values of name, id, and salary.
Implement a constructor to initialize the name, id, and salary of an employee.
Implement a destructor to decrement the totalEmployees count when an object is destroyed */

#include <iostream>
using namespace std;
class hamna
{
private:
    string name;
    int id;
    double salary;

public:
    static int totalEmployees;
    static double totalSalary;

    hamna(string name, int id, double salary) : name(name), id(id), salary(salary)
    {
        totalEmployees++;
        totalSalary += salary;
    }

    static double averageSalary()
    {
        return totalSalary / totalEmployees;
    }

    int Name(string name)
    {
        this->name = name;
    }

    string Name() const
    {
        return name;
    }

    int setId(int id)
    {
        this->id = id;
    }

    int getId() const
    {
        return id;
    }

    int setSalary(double salary)
    {
        this->salary = salary;
        totalSalary = totalSalary - salary + this->salary;
    }

    double Salary() const
    {
        return salary;
    }
};

int hamna::totalEmployees = 0;
double hamna::totalSalary = 0.0;

int main()
{
    hamna hehe("Navier", 1, 5000.0);
    hamna haha("Eliona", 2, 6000.0);

    cout << "Average salary: " << hamna::averageSalary() << endl;

    return 0;
}