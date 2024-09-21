// File: problem 1 assignment no 3 oop.cpp
// Date: 01-05-2024
// Name: Ayesha Imran
// Registration No: 2023-BS-AI-057
/*Write a user-defined program to declare a class which stores a complex number.
 Demonstrate the use of constant objects, constant member function and constant arguments, using this class.*/
 
#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Constant member function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << std::endl;
    }

    // Addition of two complex numbers
    Complex add(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }
};

int main() {
    // Constant object
    const Complex c1(3.0, 4.0);
    const Complex c2(1.0, 2.0);

    // Displaying constant objects
    cout << "Constant Object 1: ";
    c1.display();
    cout << "Constant Object 2: ";
    c2.display();

    // Adding constant objects and displaying the result
    cout << "Addition of constant objects: ";
    Complex result = c1.add(c2);
    result.display();

    return 0;
}
