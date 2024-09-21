//2023-bs-ai-021
//yumna irfan
// Date: 02-05-2024
//salary
#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    string name;
    int id;
    float salary;
    static int totalEmployees;
    static float totalSalary;

public:
    Employee(string name, int id, float salary) : name(name), id(id), salary(salary) {
        totalEmployees++;
        totalSalary += salary;
    }
    ~Employee() {
        totalEmployees--;
        totalSalary -= salary;
    }
    void setName(string name) {
        this->name = name;
    }
    void setId(int id) {
        this->id = id;
    }
    void setSalary(float salary) {
        totalSalary -= this->salary;
        this->salary = salary;
        totalSalary += this->salary;
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
    static float averageSalary() {
        if (totalEmployees == 0) {
            return 0.0f;
        }
        return totalSalary / totalEmployees;
    }
};
int Employee::totalEmployees = 0;
float Employee::totalSalary = 0.0f;
int main() {
    Employee F1("Yumna irfan", 1, 80000.0);
    Employee F2("Lubaina irfan", 2, 100000.0);
    cout << "Total employees: " << Employee::totalEmployees << endl;
    cout << "Average salary: " << Employee::averageSalary() << endl;
    return 0;
}