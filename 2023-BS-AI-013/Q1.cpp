//1-MAY-2024
//SEEMAL MUSTAFA
//2023-BSAI-013
//OOP ASSIGNMENT

//write a class that contains the following attributes

//name of car
//direction of car
//position from imaginary zero point

//the class has following members

//the contructor to be initialized

//turn function use to change the direction of car to one steps rightside (e.g. if the direction is E should be change to s and so on )
//overload the turn function to change the direction to any side directly. it should accept the direction parameter.`
//move function to change the position of car away from zero point.it should accept the distance as parameters.

#include <iostream>
using namespace std;

class Car {
private:
    string name;
    char direction;
    int positionX;
    int positionY;

public:
    Car(const string& name, char direction, int positionX, int positionY)
        : name(name), direction(direction), positionX(positionX), positionY(positionY) {}

    void turn() {
        switch(direction) {
            case 'N': direction = 'E'; break;
            case 'E': direction = 'S'; break;
            case 'S': direction = 'W'; break;
            case 'W': direction = 'N'; break;
            default: break;
        }
    }

    void turn(char newDirection) {
        if (newDirection == 'N' || newDirection == 'E' || newDirection == 'S' || newDirection == 'W') {
            direction = newDirection;
        }
    }

    void move(int distance) {
        switch(direction) {
            case 'N': positionY += distance; break;
            case 'E': positionX += distance; break;
            case 'S': positionY -= distance; break;
            case 'W': positionX -= distance; break;
            default: break;
        }
    }

    void display() {
        cout << "Car: " << name <<endl;
		 cout<<" Position:" << positionX << ", " << positionY << endl;
		cout<< " Direction: " << direction <<endl;
    }
};

int main() {
    Car seemal("Toyota", 'N', 0, 0);
    seemal.display();

    seemal.turn();
    seemal.display();

    seemal.turn('W');
    seemal.display();

    seemal.move(5);
    seemal.display();

    return 0;
}
