#include <iostream>
using namespace std;
class Employee
 {
private:
    string name;
    int id;
    float salary;
    static int totalEmployees;
    static float totalSalary;
public:
    Employee(std::string empName, int empId, float empSalary) : name(empName), id(empId), salary(empSalary)
	 {
        totalEmployees++;
        totalSalary += empSalary;
    }
    ~Employee()
	 {
        totalEmployees--;
        totalSalary -= salary;
    }
    static float averageSalary()
	 {
        if (totalEmployees == 0)
            return 0.0f;
        else
            return totalSalary / totalEmployees;
    }
    void setName(string empName)
	 {
        name = empName;
    }
    void setId(int empId)
	 {
        id = empId;
    }
    void setSalary(float empSalary)
	 {
        totalSalary += empSalary - salary;
        salary = empSalary;
    }
    string getName() const {
        return name;
    }
    int getId() const {
        return id;
    }
    float getSalary() const {
        return salary;
    }
    static int getTotalEmployees()
	 {
        return totalEmployees;
    }
};
int Employee::totalEmployees = 0;
float Employee::totalSalary = 0.0f;
int main()
 {
    Employee emp1("John", 101, 50000.0);
    Employee emp2("Alice", 102, 60000.0);
    Employee emp3("Bob", 103, 55000.0);
    cout << "Employee 1: Name - " << emp1.getName() << ", ID - " << emp1.getId() << ", Salary - $" << emp1.getSalary() << endl;
    cout << "Employee 2: Name - " << emp2.getName() << ", ID - " << emp2.getId() << ", Salary - $" << emp2.getSalary() << endl;
    cout << "Employee 3: Name - " << emp3.getName() << ", ID - " << emp3.getId() << ", Salary - $" << emp3.getSalary() << endl;
    cout << "Total number of employees: " << Employee::getTotalEmployees() << endl;
    cout << "Average salary: $" << Employee::averageSalary() << endl;
    return 0;
}
