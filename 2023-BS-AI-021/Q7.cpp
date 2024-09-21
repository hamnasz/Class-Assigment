//2023-bs-ai-021
//yumna irfan
// Date: 02-05-2024
//employee
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int id;
    float salary;
public:
    // Constructor to initialize with user input
    Employee(const string& name, float salary) : name(name), salary(salary) {
        static int nextId = 1;
        id = nextId++;
    }
    // Default constructor
    Employee() : Employee("", 0.0) {}
    // Destructor
    ~Employee() {
        cout << "Employee with ID " << id << " has been deleted.\n";
    }
    // Copy constructor
    Employee(const Employee& other) {
        name = other.name;
        salary = other.salary;
        id = other.id;
    }
    // Display employee information
    void display() const {
        cout << "Name: " << name <<endl;
        cout << "ID: " << id <<endl;
        cout << "Salary: " << salary <<endl;
    }
};
int main() {
    // Create object using constructor with user input
    string name;
    float salary;
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee salary: ";
    cin >> salary;
    Employee emp1(name, salary);
    // Display employee information
    cout << "\nEmployee created using constructor by user input:\n";
    emp1.display();
    // Create object using default constructor
    Employee emp2;
    // Display employee information
    cout << "\nEmployee created using default constructor:\n";
    emp2.display();
    // Create object using copy constructor
    Employee emp3 = emp1;
    // Display employee information
    cout << "\nEmployee created using copy constructor:\n";
    emp3.display();
    return 0;
}