//2023-bs-ai-021
//yumna irfan
// Date: 02-05-2024
//complex number
#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imaginary;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}
    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};
int main() {
    const Complex c1(3.0, 4.0);
    const Complex c2(1.0, 2.0);
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    return 0;
}