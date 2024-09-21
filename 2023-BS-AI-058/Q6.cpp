#include <iostream>
using namespace std;
class Complex 
{
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}
    void display() const
	 {
        std::cout << real << " + " << imaginary << "i";
    }
    Complex add(const Complex& other) const 
	{
        return Complex(real + other.real, imaginary + other.imaginary);
    }
};

int main() 
{
    const Complex c1(3.0, 4.0);
    const Complex c2(1.0, -2.0);
    std::cout << "Constant objects:" << std::endl;
    std::cout << "c1 = ";
    c1.display();
    std::cout << std::endl;
    std::cout << "c2 = ";
    c2.display();
    std::cout << std::endl;
    std::cout << "\nAddition of constant objects using constant member function:" << std::endl;
    std::cout << "Result: ";
    c1.add(c2).display();
    std::cout << std::endl;
    const Complex c3 = c1.add(c2);
    std::cout << "\nResult of adding constant objects with constant arguments:" << std::endl;
    std::cout << "c3 = ";
    c3.display();
    std::cout << std::endl;

    return 0;
}
