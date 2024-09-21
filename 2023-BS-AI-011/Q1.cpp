//ayesha imran
//2023-BSAI-011
//section a
//oops assignment
//Write a user-defined program to declare a class which stores a complex number. Demonstrate the use of
//constant objects, constant member function and constant arguments, using this class.
#include <iostream>
using namespace std;
class ayesha {
private:
    double real;
    double imag;

public:
    // Constructor
    ayesha(double r = 0.0, double i = 0.0) 
	{
        real = r;
        imag = i;
    }

    // Constant member function to display complex number
    void display() const 
	{
      cout << real << " + " << imag << "i" << endl;
    }

    // Constant member function to add two complex numbers
    ayesha add(const ayesha& other) const 
	{
        return ayesha(real + other.real, imag + other.imag);
    }
};

int main() {
    // Constant object declaration
    const ayesha a1(2.0, 3.0);
    const ayesha a2(1.0, 4.0);

    // Display constant objects
    cout << "Constant Object c1: ";
    a1.display();
    cout << "Constant Object c2: ";
    a2.display();

    // Addition of constant objects
    const ayesha sum = a1.add(a2);
    cout << "Sum of c1 and c2: ";
    sum.display();

    return 0;
}

