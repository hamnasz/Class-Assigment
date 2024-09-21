// File: laiba_1st_program.cpp
// Date: 02-05-2024
// Name: LAIBA FATIMA
// Registration No: 2023-BS-AI-O47
/* Question Statement :Write a user-defined program to declare a class which 
    stores a complex number. Demonstrate the use of constant objects, constant 
    member function and constant arguments, using this class.*/
    
#include <iostream>
using namespace std;
class ComplexNumber 
{
private:
    double reallaiba;
    double imaginarylaiba;

public:
    // Constructor
    ComplexNumber(double r, double i) : reallaiba(r), imaginarylaiba(i) {}

    // Constant member functions to get real and imaginary parts
    double getReal() const {
        return reallaiba;
    }

    double getImaginary() const {
        return imaginarylaiba;
    }

    // Constant member function to display the complex number
    void display() const {
        cout << reallaiba << " + " << imaginarylaiba << "i" << endl;
    }
};

int main() {
    double real_part, imaginary_part;

    // Input for the first complex number
    cout << "Enter real part of first complex number: ";
    cin >> real_part;
    cout << "Enter imaginary part of first complex number: ";
    cin >> imaginary_part;

    const ComplexNumber num1(real_part, imaginary_part);

    // Display the first complex number
    cout << "Constant object num1: ";
    num1.display();

    // Input for the second complex number
    cout << "Enter real part of second complex number: ";
    cin >> real_part;
    cout << "Enter imaginary part of second complex number: ";
    cin >> imaginary_part;

    const ComplexNumber num2(real_part, imaginary_part);

    // Display the second complex number
    cout << "Constant object num2: ";
    num2.display();

    return 0;
}
