//2023-bs-ai-021
//yumna irfan
// Date: 02-05-2024
//class car
#include <iostream>
#include <string>
using namespace std;
class car {
private:
    string name;
    char direction;
    int position_A;
    int position_B;
public:
    car(string name, char direction, int position_A, int position_B) :
        name(name), direction(direction), position_A(position_A), position_B(position_B) {}
    void turn() {
        if (direction == 'E') {
            direction = 'S';
        } else if (direction == 'S') {
            direction = 'W';
        } else if (direction == 'W') {
            direction = 'N';
        } else if (direction == 'N') {
            direction = 'E';
        }
    }
    void turn(char newDirection) {
        direction = newDirection;
    }
	    void move(int distance) {
        if (direction == 'E') {
            position_A += distance;
        } else if (direction == 'W') {
            position_A -= distance;
        } else if (direction == 'N') {
            position_B += distance;
        } else if (direction == 'S') {
            position_B -= distance;
        }
    }
    void display() {
        cout << "Car Name: " << name << endl;
        cout << "Direction: " << direction << endl;
        cout << "Position_A: " << position_A << endl;
        cout << "Position_B: " << position_B << endl;
    }
};
int main() {
    car yumna("Honda", 'E', 0, 0);
    yumna.display();
    yumna.turn();
    yumna.display();
    yumna.move(5);
    yumna.display();
    yumna.turn('W');
    yumna.display();
    yumna.move(3);
    yumna.display();
    return 0;
}