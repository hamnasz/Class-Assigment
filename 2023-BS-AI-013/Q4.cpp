//1-MAY-2024
//SEEMAL MUSTAFA
//2023-BSAI-013
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
using namespace std;

class Employee
 {
private:
    string name;
    int id;
    double salary;

public:
    static int totalEmployees;
    static double totalSalary;

    Employee(string name, int id, double salary) : name(name), id(id), salary(salary)
 {
        totalEmployees++;
        totalSalary += salary;
    }

    ~Employee() 
	{
        totalEmployees--;
    }

    static double averageSalary() 
	{
        return totalSalary / totalEmployees;
    }

    void setName(string name) 
	{
        this->name = name;
    }

    string getName() const 
	{
        return name;
    }

    void setId(int id) 
	{
        this->id = id;
    }

    int getId() const
	 {
        return id;
    }

    void setSalary(double salary)
	 {
        this->salary = salary;
        totalSalary = totalSalary - salary + this->salary; 
    }

    double getSalary() const {
        return salary;
    }
};

int Employee::totalEmployees = 0;
double Employee::totalSalary = 0.0;

int main() {
    Employee seemal1("John Doe", 1, 5000.0);
    Employee seemal2("Jane Doe", 2, 6000.0);

    cout << "Average salary: " << Employee::averageSalary() <<endl;

    return 0;
}
