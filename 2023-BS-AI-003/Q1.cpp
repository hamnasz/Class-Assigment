#include <iostream>
using namespace std;
class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    void display() const {
        cout << real << " + " << imag << "i" <<endl;
    }

    void setReal(double r) {
        real = r;
    }
};

int main() {
    const Complex c1(3.0, 4.0);
    c1.display(); // 3 + 4i

    Complex c2(2.0, 3.0);
    c2.display(); // 2 + 3i
    c2.setReal(10);
    c2.display(); // 10 + 3i
}

