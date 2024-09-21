#include <iostream>
#include <string>
using namespace std;
class Employee 
{
private:
    static int nextID;
    string name;
    int ID;
    double salary;
public:
    Employee()
	 {
        ID = ++nextID;
        name = "Unknown";
        salary = 0.0;
    }
    Employee(string empName, double empSalary) 
	{
        ID = ++nextID;
        name = empName;
        salary = empSalary;
    }
    ~Employee()
	 {
        cout << "Employee " << name << " with ID " << ID << " is being destroyed\n";
    }
    void display()
	 {
        cout << "Name: " << name << ", ID: " << ID << ", Salary: $" << salary << endl;
    }
};
int Employee::nextID = 0;
int main()
 {
    Employee emp1;
    Employee emp2("John", 50000.0);
    cout << "Employee 1:\n";
    emp1.display();
    cout << "\nEmployee 2:\n";
    emp2.display();
    return 0;
}
