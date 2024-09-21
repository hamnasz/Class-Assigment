
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
    // Constructor
    Employee(string name, int id, float salary) : name(name), id(id), salary(salary) {
        totalEmployees++;
        totalSalary += salary;
    }

    // Destructor
    ~Employee() {
        totalEmployees--;
        totalSalary -= salary;
    }

    // Setter functions
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

    // Getter functions
    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    float getSalary() const {
        return salary;
    }

    // Static member function to calculate average salary
    static float averageSalary() {
        if (totalEmployees == 0) {
            return 0.0f;
        }
        return totalSalary / totalEmployees;
    }
};

// Initialize static members
int Employee::totalEmployees = 0;
float Employee::totalSalary = 0.0f;

int main() {
    Employee t1("Taibah Shahbaz", 1, 120000.0);
    Employee t2("Tahreem butt", 2, 250000.0);

    cout << "Total employees: " << Employee::totalEmployees << endl;
    cout << "Average salary: " << Employee::averageSalary() << endl;

    return 0;
}