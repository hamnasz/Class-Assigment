//AYESHA IMRAN
//2023-BSAI-061
//PROGRAM 5
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
        name = "s";
        salary = 0.0;
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
    Employee ayeshaA;
    ayeshaA.display();

    Employee ayeshaB("John Doe", 50000.0);
    ayeshaB.display();

    return 0;
}