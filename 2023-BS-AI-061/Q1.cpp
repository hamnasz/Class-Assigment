//AYESHA IMRAN
//2023-BSAI-061
//PROGRAM 1
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}
    void display() const {
        cout << real << " + " << imaginary << "i";
    }
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
};

int main() {
    // Constant objects
    const Complex c1(3.0, 4.0);
    const Complex c2(1.0, -2.0);

    // Display the constant objects
    cout << "c1: ";
    c1.display();
    cout << endl;
    cout << "c2: ";
    c2.display();
    cout << endl;

    const Complex sum = c1.add(c2);

    // Display the result
    cout << "Sum: ";
    sum.display();
    cout << endl;

    return 0;
}
