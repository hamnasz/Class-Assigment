//taibah shahbaz
//2023-BSAI-024
//OOP ASSIGNMENT

//Create a class employee which stores is name, ID and salary of an employee by user input. The ID should 
//be generated upon the creation of object, starting from 1. Include all the constructors and destructor in 
//the class. Create one object using each of the constructors and display it.

#include <iostream>
using namespace std;

class Employee 
{
private:
   static int nextId;
    int id;
    std::string name;
    double salary;

public:
    Employee() {
        id = ++nextId;
        name = "jennie";
        salary = 12000;
    }

    Employee(const string& name, double salary) {
        id = ++nextId;
        this->name = name;
        this->salary = salary;
    }

    ~Employee() {
        cout << "Employee " << id << " is being deleted" << endl;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int Employee::nextId = 0;

int main() {
    Employee taibah1;
    taibah1.display();

    Employee taibah2("vanessa", 50000.0);
    taibah2.display();

    return 0;
}