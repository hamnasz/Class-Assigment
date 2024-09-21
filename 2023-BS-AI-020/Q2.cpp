// File: 2_car.cpp
// Date: 01-05-2024
// Name: Mishal Nadeem
// Registration No: 2023-BS-AI-020

/*Write a class that contain the following attribute 
-The name of car 
-Direction of car (E,W,N,S) 
-The position of car 
-The class has fallowing member function
-The constructor to be initialized
- Turn function use to change the direction of car to one steps right side (e.g. if the direction is E, Should be change to S and so on)
- Overload the turn function to change the direction to any side directly. It should accept the direction parameter.
- Move function to change the position of car away from zero point. It should accept the distance as parameter*/

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
    // Constructor to initialize the car's attributes
    Car(string n, char d, int posX, int posY) : name(n), direction(d), positionX(posX), positionY(posY) {}

    // Function to turn the car one step right
    void turn() {
        switch(direction) {
            case 'E':
                direction = 'S';
                break;
            case 'S':
                direction = 'W';
                break;
            case 'W':
                direction = 'N';
                break;
            case 'N':
                direction = 'E';
                break;
            default:
                cerr << "Invalid direction!" << endl;
        }
    }

    // Overloaded turn function to turn the car to any specified direction
    void turn(char newDirection) {
        direction = newDirection;
    }

    // Function to move the car by a specified distance
    void move(int distance) {
        switch(direction) {
            case 'E':
                positionX += distance;
                break;
            case 'S':
                positionY -= distance;
                break;
            case 'W':
                positionX -= distance;
                break;
            case 'N':
                positionY += distance;
                break;
            default:
                cerr << "Invalid direction!" << endl;
        }
    }

    // Function to display the car's current status
    void display() {
        cout << "Car Name: " << name << endl;
        cout << "Direction: " << direction << endl;
        cout << "Position: (" << positionX << ", " << positionY << ")" << endl;
    }
};

int main() {
    // Create a car object
    Car mishalCar("Toyota", 'N', 0, 0);

    // Display initial status
    cout << "Initial Status:\n";
    mishalCar.display();
    cout << endl;

    // Turn the car one step right
    mishalCar.turn();
    cout << "After turning one step right:\n";
    mishalCar.display();
    cout << endl;

    // Turn the car to the West direction directly
    mishalCar.turn('W');
    cout << "After turning directly to the West:\n";
    mishalCar.display();
    cout << endl;

    // Move the car by a distance of 5 units
    mishalCar.move(5);
    cout << "After moving 5 units:\n";
    mishalCar.display();
    cout << endl;

    return 0;
}
