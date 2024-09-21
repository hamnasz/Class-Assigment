//Taibah Shahbaz
//2023-BSAI-024
//section A
//oops assignment
//Write a user-defined program to declare a class which stores a complex number. Demonstrate the use of
//constant objects, constant member function and constant arguments, using this class.
#include <iostream>
using namespace std;
class taibah {
private:
    double real;
    double imag;

public:
    // Constructor
    taibah(double r = 0.0, double i = 0.0) 
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
    taibah add(const taibah& other) const 
	{
       return taibah(real+other.real,imag+other.imag);
   }
};

int main() {
    // Constant object declaration
    const taibah t1(2.0, 3.0);
    const taibah t2(1.0, 4.0);

    // Display constant objects
    cout << "Constant Object c1: ";
    t1.display();
    cout << "Constant Object c2: ";
    t2.display();

    // Addition of constant objects
    const taibah sum = t1.add(t2);
    cout << "Sum of c1 and c2: ";
    sum.display();

    return 0;
}