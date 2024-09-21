//1-MAY-2024
//Mohammad Mukedas
//2023-BSAI-008
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
#include<iostream>
using namespace std;

class Car{
    string name;
    char direction;
    int position;

public:
    Car(string n, char d, int p) {
        name = n;
        direction = d;
        position = p;
    }
    void turn() {
        switch (direction) {
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
    void turn(char newDirection) {
        if (newDirection == 'N' || newDirection == 'E' || newDirection == 'S' || newDirection == 'W') {
            direction = newDirection;
        } else {
            cout << "Invalid direction!" << endl;
        }
    }
    void move(int distance) {
        switch (direction) {
            case 'N':
                position += distance;
                break;
            case 'E':
                position += distance;
                break;
            case 'S':
                position -= distance;
                break;
            case 'W':
                position -= distance;
                break;
        }
    }
    void display() {
        cout << "Car Name: " << name << endl;
        cout << "Direction: " << direction << endl;
        cout << "Position: " << position << endl;
    }
};

int main(){
    Car myCar("Toyota", 'E', 0);
    myCar.display();

    myCar.turn();
    myCar.display();

    myCar.turn('N');
    myCar.display();

    myCar.move(10);
    myCar.display();

    return 0;
}
