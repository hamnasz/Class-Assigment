//ayesha imran 
//023-bsai-011
//oops

//Create a class employee which stores is name, ID and salary of an employee by user input. The ID should
//be generated upon the creation of object, starting from 1. Include all the constructors and destructor in
//the class. Create one object using each of the constructors and display it.

#include <iostream>
#include <string>
using namespace std;
class ayesha {
private:
    string name;
    int id;
    double salary;

public:
    // Default constructor
    ayesha() {
    
        static int nextId = 1;
        id = nextId++;
        salary = 10000.0;
        
    }

    // Parameterized constructor
    ayesha(string empName, double empSalary) {
        static int nextId = 1;
        name = empName;
        id = nextId++;
        salary = empSalary;
    }

    // Copy constructor
    ayesha(const ayesha& emp) {
        name = emp.name;
        id = emp.id;
        salary = emp.salary;
    }

    // Destructor
    ~ayesha() {
        cout << "Destructor called for Employee " << id << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary <<endl;
    }
};

int main() {
    
   ayesha emp1; 
    emp1.display();

  string name;
    double salary;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter salary: ";
    cin >> salary;

    ayesha emp2(name, salary); 
    emp2.display();

    ayesha emp3 = emp2;
    emp3.display();

    return 0;
}

