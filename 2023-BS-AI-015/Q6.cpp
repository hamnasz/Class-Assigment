//file: file eman.cpp
//date: 1-05-2024
//name: eman tahir
//reg no. 2023-bs-ai-015
//question statement:Write a C++ program for the class vehicle and its drive class water transport, road transport and air transport vehicles. Make suitable data variables and member functions. When you create an object must be count and display total no of object created also create every class objects and access member through the member functions.

#include <iostream>
using namespace std;

class Vehicle {
private:
    static int count;

public:
    Vehicle() {
        count++;
    }

    virtual int display()
	{
        cout << "Vehicle" << endl;
    }

    static int Count() {
        return count;
    }
};

int Vehicle::count = 0;

class WaterTransport : public Vehicle {
public:
    int display()  {
        cout << "Water Transport" << endl;
    }
};

class RoadTransport : public Vehicle {
public:
    int display()  {
        cout << "Road Transport" <<endl;
    }
};
 
class AirTransport : public Vehicle {
public:
    int display()  {
        cout << "Air Transport" <<endl;
    }
};

int main() {
    WaterTransport eman1;
    RoadTransport eman2;
    AirTransport eman3;

    cout << "Total number of objects created: " << Vehicle::Count() << endl;

    eman1.display();
    eman2.display();
    eman3.display();

    return 0;
}
