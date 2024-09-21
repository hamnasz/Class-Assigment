/* File: Program no 1.cpp
Date: 01-05-2024
Name: Humna Imran
Registration No: 2023-BS-AI-017

Write a user-defined program to declare a
class which stores a complex number.
Demonstrate the use of constant objects,
constant member function and constant arguments,
using this class.*/

#include <iostream>
using namespace std;

class hamnaic
{
private:
    double real;
    double imaginary;

public:
    // Constructor
    hamnaic(double r = 0, double i = 0) : real(r), imaginary(i) {}

    /* Constant member function
    to display complex number */

    void display() const
    {
        cout << real << " + " << imaginary << "i";
    }

    /* Declared Function of Constant member to
    add two complex numbers */

    hamnaic add(const hamnaic &other) const
    {
        hamnaic sum;
        sum.real = real + other.real;
        sum.imaginary = imaginary + other.imaginary;
        return sum;
    }
};

int main()
{
    // Constant object declaration
    const hamnaic hamnahehe1(3.5, 2.5);
    const hamnaic hamnahehe2(2.0, 1.0);

    cout << "Constant Objects:\n";
    cout << "Number 1: ";
    hamnahehe1.display();
    cout << "\nNumber 2: ";
    hamnahehe2.display();
    cout << endl;

    cout << "⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐";

    // Calling constant member function
    cout << "\nUsing Constant Member Function:\n";
    hamnaic sum = hamnahehe1.add(hamnahehe2);
    cout << "Sum: ";
    sum.display();
    cout << endl;

    return 0;
}