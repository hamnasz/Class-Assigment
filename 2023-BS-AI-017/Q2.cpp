/* File: Program No 2.cpp
Date: 01-05-2024
Name: Humna Imran
Registration No: 2023-BS-AI-O17

Question Statement :Write a class that contain the following attribute
The name of car
⭐ Direction of car (E, W, N, S)

⭐ The position of car (from imaginary zero point)

The class has fallowing member function the constructor to be initialize
⭐ Turn function use to change the direction of car
to one steps right side (e.g. if the direction is E,Should be change to S and so on)

⭐ Overload the turn function to change the direction to any side directly.
It should accept the direction parameter.

⭐ Move function to change the position of car away from zero point.
It should accept the distance as parameter.*/

#include <iostream>
#include <string>

using namespace std;

class Hamna
{
private:
    string name;
    char direction;
    int positionX;
    int positionY;

public:
    // Constructor to initialize car's properties
    Hamna(string tesla, char dir, int posX, int posY) : name(tesla), direction(dir), positionX(posX), positionY(posY) {}

    // Turn car clockwise
    void turnRight()
    {
        switch (direction)
        {
        case 'N':
            direction = 'E';
            break;
        case 'E':
            direction = 'S';
            break;
        case 'S':
            direction = 'W';
            break;
        case 'W':
            direction = 'N';
            break;
        }
    }

    // Turn car to any direction
    void turn(char newDir)
    {
        direction = newDir;
    }

    // Move car forward by a distance
    void moveForward(int distance)
    {
        if (direction == 'N')
        {
            positionY += distance;
        }
        else if (direction == 'E')
        {
            positionX += distance;
        }
        else if (direction == 'S')
        {
            positionY -= distance;
        }
        else if (direction == 'W')
        {
            positionX -= distance;
        }
    }

    // Display car's current state
    void display()
    {
        cout << "Car Name: " << name << endl;
        cout << "Direction: " << direction << endl;
        cout << "Position: (" << positionX << ", " << positionY << ")" << endl;
    }
};

int main()
{
    // Create a car object
    Hamna Hamna("Tesla Model Y", 'N', 0, 0);

    // Display initial state
    cout << "Initial state:" << endl;
    Hamna.display();

    // Turn car right
    Hamna.turnRight();
    cout << "\nAfter turning right:" << endl;
    Hamna.display();

    // Turn car left (using turn with argument)
    Hamna.turn('W');
    cout << "\nAfter turning left:" << endl;
    Hamna.display();

    // Move car forward
    Hamna.moveForward(5);
    cout << "\nAfter moving forward:" << endl;
    Hamna.display();

    return 0;
}