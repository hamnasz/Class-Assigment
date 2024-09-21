//file: file eman.cpp
//date: 1-05-2024
//name: eman tahir
//reg no. 2023-bs-ai-015
//question statement:Write a class that contain the following attribute
//"	The name of car
//"	Direction of car (E, W, N, S)
//"	The position of car (from imaginary zero point)
//The class has fallowing member function
//The constructor to be initialize
//"	Turn function use to change the direction of car to one steps right side (e.g. if the direction is E, should be change to S and so on)
//"	Overload the turn function to change the direction to any side directly. It should accept the direction parameter.
//"	Move function to change the position of car away from zero point. It should accept the distance as parameter.
#include <iostream>
using namespace std;
class Car {
private:
    string name;
    char direction;
    int positionx;
    int positiony;

public:
    Car(const string & name, char direction, int positionx, int positiony)  : name(name), direction(direction), positionx(positionx), positiony(positiony) {}

    int turn() {
        switch(direction) {
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
            default: 
			break;
        }
    }

    int turn(char newDirection) {
        if (newDirection == 'N' || newDirection == 'E' || newDirection == 'S' || newDirection == 'W')
		{
            direction = newDirection;
        }
    }

    int move(int distance) {
        switch(direction) {
            case 'N': 
			positiony += distance; 
			break;
            case 'E': 
			positionx += distance; 
			break;
            case 'S': 
			positiony -= distance; 
			break;
            case 'W': 
			positionx -= distance; 
			break;
            default: 
			break;
        }
    }
    int display() {
        cout << "Car: " << name <<endl;
		 cout<<" Position:" << positionx << ", " << positiony << endl;
		cout<< " Direction: " << direction <<endl;
    }
};

int main() {
    Car eman("Honda", 'S', 0, 3);
    eman.display();

    eman.turn();
    eman.display();

    eman.turn('W');
    eman.display();

    eman.move(5);
    eman.display();

    return 0;
}
