#include <iostream>
#include <string>
using namespace std;
class Car 
{
private:
    string name;
    char direction;
    int positionX;
    int positionY;

public:
    Car(string n, char d, int posX = 0, int posY = 0) : name(n), direction(d), positionX(posX), positionY(posY) {}
    void turn() 
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
    void turn(char dir) 
	{
        direction = dir;
    }
    void move(int distance) {
        switch (direction) {
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
    void display() {
        cout << "Car Name: " << name << endl;
        cout << "Direction: " << direction << endl;
        cout << "Position: (" << positionX << ", " << positionY << ")" << endl;
    }
};
int main() 
{
    Car myCar("MyCar", 'N');
    cout << "Initial State:" << endl;
    myCar.display();
    myCar.turn();
    myCar.move(5);
    myCar.display();
    myCar.turn('W');
    myCar.move(3);
    myCar.display();
    return 0;
}
