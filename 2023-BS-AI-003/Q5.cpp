#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int id;
    double salary;
    static int nextID;

public:
    Employee() : id(nextID++) {}

    Employee(string n, double s) : name(n), id(nextID++), salary(s) {}

    void display() {
        cout << "Name: " << name <<endl;
        cout << "ID: " << id <<endl;
        cout << "Salary: " << salary <<endl;
    }
};

int Employee::nextID = 1;

int main() {
    Employee e1, e2("sunny", 20000.0), e3(e2);
    e1.display();
    e2.display();
    e3.display();
    return 0;
}