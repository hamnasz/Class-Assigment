//file: file eman.cpp
//date: 1-05-2024
//name: eman tahir
//reg no. 2023-bs-ai-015
//question statement: Create a class employee which stores is name, ID and salary of an employee by user input. The ID should be generated upon the creation of object, starting from 1. Include all the constructors and destructor in the class. Create one object using each of the constructors and display it.

#include <iostream>
using namespace std;
class Employee 
{
private:
   static int nextId;
    int id;
    string name;
    double salary;

public:
    Employee() {
        id = 1;
        name = "a";
        salary = 20000.0;
    }

    Employee(const string& name, double salary) {
        id = 2;
        this->name = name;
        this->salary = salary;
    }


    int display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};



int main() {
    Employee eman1;
    eman1.display();

    Employee eman2("b", 30000.0);
    eman2.display();

    return 0;
}
