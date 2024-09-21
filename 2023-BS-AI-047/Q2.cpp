// File: laiba_2nd_program.cpp
// Date: 02-05-2024
// Name: LAIBA FATIMA
// Registration No: 2023-BS-AI-O47

/* Question Statement :Write a class that contain the following attribute 
~ The name of car
~ Direction of car (E, W, N, S)
~ The position of car (from imaginary zero point)
The class has fallowing member function
The constructor to be initialize
~ Turn function use to change the direction of car to one steps right side (e.g. if the direction is E, 
Should be change to S and so on)
~ Overload the turn function to change the direction to any side directly. It should accept the 
direction parameter.
~ Move function to change the position of car away from zero point. It should accept the distance 
as parameter.*/

#include <iostream>
#include <string>

using namespace std;

class laiba_Car {
private:
    string name;
    char direction;
    int positionX;
    int positionY;

public:
    // Constructor to initialize the car's name, direction, and position
    laiba_Car(string carName, char dir, int posX, int posY) : name(carName), direction(dir), positionX(posX), positionY(posY) {}

    // Function to turn the car to the right (clockwise) by one step
    void turn() {
        if (direction == 'N') {
            direction = 'E';
        } else if (direction == 'E') {
            direction = 'S';
        } else if (direction == 'S') {
            direction = 'W';
        } else if (direction == 'W') {
            direction = 'N';
        }
    }

    // Overloaded function to turn the car to any specified direction
    void turn(char newDirection) {
        direction = newDirection;
    }

    // Function to move the car by a given distance
    void move(int distance) {
        if (direction == 'N') {
            positionY += distance;
        } else if (direction == 'E') {
            positionX += distance;
        } else if (direction == 'S') {
            positionY -= distance;
        } else if (direction == 'W') {
            positionX -= distance;
        }
    }

    // Function to display the current state of the car
    void display() {
        cout << "Car Name: " << name << endl;
        cout << "Direction: " << direction << endl;
        cout << "Position: (" << positionX << ", " << positionY << ")" << endl;
    }
};

int main() {
    // Create a car object and initialize its name, direction, and position
    laiba_Car myCar("BUGATTI VEYRON", 'N', 0, 0);

    // Display the initial state of the car
    cout << "Initial state:" << endl;
    myCar.display();

    // Turn the car to the right
    myCar.turn();
    cout << "\nAfter turning right:" << endl;
    myCar.display();

    // Turn the car to the left
    myCar.turn('W');
    cout << "\nAfter turning left:" << endl;
    myCar.display();

    // Move the car forward by 5 units
    myCar.move(5);
    cout << "\nAfter moving forward:" << endl;
    myCar.display();

    return 0;
}
