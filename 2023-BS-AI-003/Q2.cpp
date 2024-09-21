#include <iostream>
using namespace std;

class Car {
private:
    string name;
    char direction;
    int position;

public:
    Car(string n) : name(n), direction('N'), position(0) {}

    void turn() {
        direction = (direction == 'N') ? 'E' : (direction == 'E') ? 'S' : (direction == 'S') ? 'W' : 'N';
    }

    void turn(char dir) {
        direction = dir;
    }

    void move(int dist) {
        position += dist;
    }

    void display() const {
        cout << "Car: " << name << ", Direction: " << direction << ", Position: " << position << endl;
    }
};

int main() {
    Car myCar("civic");
    myCar.display();
    myCar.turn();
    myCar.display();
    myCar.turn('S');
    myCar.display();
    myCar.move(10);
    myCar.display();
    return 0;
}