// File: 1_complex.cpp
// Date: 01-05-2024
// Name: Mishal Nadeem
// Registration No: 2023-BS-AI-020

// Write a user-defined program to declare a class which stores a complex number.Demonstrate the use of constant objects, constant member function and constant arguments, using this class.

#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Constructor
    ComplexNumber(double r = 0, double i = 0) : real(r), imaginary(i) {}

    // Constant member function to display complex number
    void display() const {
        cout << real << " + " << imaginary << "i";
    }

    // Constant member function to add two complex numbers //This function takes a single parameter named other, which is a constant reference to another ComplexNumber object.
    ComplexNumber add(const ComplexNumber& other) const {
        ComplexNumber result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
};

int main() {
    // Constant object declaration
    const ComplexNumber mishal1(3.5, 2.5);
    const ComplexNumber mishal2(2.0, 1.0);

    cout << "Constant Objects:\n";
    cout << "Number 1: ";
    mishal1.display();
    cout << "\nNumber 2: ";
    mishal2.display();
    cout << endl;

    // Call to constant member function
    cout << "\nUsing Constant Member Function:\n";
    ComplexNumber sum = mishal1.add(mishal2);
    cout << "Sum: ";
    sum.display();
    cout << endl;

    return 0;
}
