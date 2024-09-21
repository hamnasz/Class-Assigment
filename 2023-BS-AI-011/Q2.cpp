//ayesha imran
//2023-bsai-011
//oops assignment

//Write a class that contain the following attribute
//~ The name of car
//~ Direction of car (E, W, N, S)
//~ The position of car (from imaginary zero point)
//The class has fallowing member function
//The constructor to be initialize
//~ Turn function use to change the direction of car to one steps right side (e.g. if the direction is E,
//Should be change to S and so on)
//~ Overload the turn function to change the direction to any side directly. It should accept the
//direction parameter.
//~ Move function to change the position of car away from zero point. It should accept the distance
//as parameter.

#include <iostream>
using namespace std;
class Car {
private:
    string name;
    char direction;
    int positionX;
    int positionY;

public:
    Car(string carName, char carDirection, int carPositionX, int carPositionY)
    {
        name = carName;
        direction = carDirection;
        positionX = carPositionX;
        positionY = carPositionY;
    }

    void turn() 
	{
        switch(direction) 
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

    void turn(char newDirection)
    {
        direction = newDirection;
    }

    void move(int distance) 
	{
        switch(direction) 
		{
            case 'N':
                positionY += distance;
                break;
            case 'E':
                positionX += distance;
                break;
            case 'S':
                positionY -= distance;
                break;
            case 'W':
                positionX -= distance;
                break;
        }
    }

    void display() 
	{
	  cout << "Car Name: " << name << endl;
      cout << "Direction: " << direction << endl;
      cout << "Position: (" << positionX << ", " << positionY << ")" << endl;
    }
};

int main()  
{
    Car ayesha("Toyota", 'N', 0, 0);
    ayesha.display();

    ayesha.turn();
    ayesha.display();

    ayesha.turn('W');
    ayesha.display();

    ayesha.move(5);
    ayesha.display();

    return 0;
}

