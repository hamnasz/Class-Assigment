// File: problem 2 assignment no 3 oop.cpp
// Date: 01-05-2024
// Name: Ayesha Imran
// Registration No: 2023-BS-AI-057
/*Write a class that contain the following attribute
 The name of car
 Direction of car (E, W, N, S)
 The position of car (from imaginary zero point)
The class has fallowing member function
The constructor to be initialize
 Turn function use to change the direction of car to one steps right side (e.g. if the direction is E, Should be change to S and so on)
 Overload the turn function to change the direction to any side directly. It should accept the direction parameter.
 Move function to change the position of car away from zero point. It should accept the distance as parameter*/

#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string name;
    char direction;
    int positionX;
    int positionY;

public:
    // Constructor to initialize the car attributes
    Car(const string& carName, char initialDirection, int initialPositionX, int initialPositionY) 
        : name(carName), direction(initialDirection), positionX(initialPositionX), positionY(initialPositionY) {}

    // Function to turn the car one step right
    void turn() {
        switch(direction) {
            case 'N': direction = 'E'; break;
            case 'E': direction = 'S'; break;
            case 'S': direction = 'W'; break;
            case 'W': direction = 'N'; break;
            default: break;
        }
    }

    // Overloaded turn function to turn the car to any side directly
    void turn(char newDirection) {
        if (newDirection == 'N' || newDirection == 'E' || newDirection == 'S' || newDirection == 'W')
            direction = newDirection;
    }

    // Function to move the car away from zero point
    void move(int distance) {
        switch(direction) {
            case 'N': positionY += distance; break;
            case 'E': positionX += distance; break;
            case 'S': positionY -= distance; break;
            case 'W': positionX -= distance; break;
            default: break;
        }
    }

    // Function to display the current state of the car
    void display() {
        cout << "Car Name: " << name << std::endl;
        cout << "Direction: " << direction << std::endl;
        cout << "Position: (" << positionX << ", " << positionY << ")" << endl;
    }
};

int main() {
    // Create a car object
    Car myCar("MyCar", 'N', 0, 0);

    // Display initial state
    cout << "Initial State:" << endl;
    myCar.display();
    cout << std::endl;

    // Turn the car and move it
    myCar.turn(); // Turn one step right
    myCar.move(5); // Move 5 units
    cout << "After turning one step right and moving 5 units:" << endl;
    myCar.display();
    cout << std::endl;

    // Turn the car to East directly and move it
    myCar.turn('E'); // Turn directly to East
    myCar.move(3); // Move 3 units
    cout << "After turning directly to East and moving 3 units:" << endl;
    myCar.display();

    return 0;
}
