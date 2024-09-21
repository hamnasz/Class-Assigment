//1-MAY-2024
//SEEMAL MUSTAFA
//2023-BSAI-013
//OOP ASSIGNMENT

//Create a class employee which stores is name, ID and salary of an employee by user input.
//The ID should be generated upon the creation of object, starting from 1. 
//Include all the constructors and destructor in the class. 
//Create one object using each of the constructors and display it.

#include <iostream>
#include <string>

class Employee {
private:
    static int ID_COUNT;
    std::string name;
    int ID;
    double salary;

public:
    Employee() : ID(++ID_COUNT), name(""), salary(0.0) {}

    Employee(std::string name) : ID(++ID_COUNT), name(name), salary(0.0) {}

    Employee(std::string name, double salary) : ID(++ID_COUNT), name(name), salary(salary) {}

    ~Employee() {}

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << ID << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int Employee::ID_COUNT = 0;

int main() {
    Employee seemal1;
    seemal1.display();

    Employee seemal2("John Doe");
    seemal2.display();

    Employee seemal3("Jane Doe", 5000.0);
    seemal3.display();

    return 0;
}