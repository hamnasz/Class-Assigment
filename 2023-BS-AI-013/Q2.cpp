//1-MAY-2024
//SEEMAL MUSTAFA
//2023-BSAI-013
//OOP ASSIGNMENT

//Write a user-defined program to declare a class which stores a complex number. Demonstrate the use of
//constant objects, constant member function and constant arguments, using this class.

#include <iostream>
using namespace std;

class Complex
 {
private:
    double real;
    double imag;

public:
    Complex(double real, double imag) : real(real), imag(imag) {}

    void display() const {
        cout << real << " + " << imag << "i" <<endl;
    }

    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main() {
    const Complex seemal1(3.0, 4.0);
    const Complex seemal2(1.0, 2.0);

    cout << "seemal: ";
    seemal1.display();

    cout << "seemal2: ";
    seemal2.display();

    const Complex seemal3 = seemal1.add(seemal2);
    cout << "Sum: ";
    seemal3.display();

    return 0;
}
