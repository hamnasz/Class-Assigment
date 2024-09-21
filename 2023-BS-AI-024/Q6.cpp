//taibah shahbaz 
//2023-BSAI-024
//OOP ASSIGNMENT

//Write a C++ program for the class vehicle and its drive class water transport, road transport and air
//transport vehicles. 
//Make suitable data variables and member functions.
// When you create an object mustbe count and display total no of object created also create every class objects and access member through
//the member functions.

#include <iostream>
using namespace std;

class Vehicle {
private:
    static int count;

public:
    Vehicle() {
        count++;
    }

    virtual ~Vehicle() {}

    virtual void display() {
        cout << "Vehicle" << endl;
    }

    static int getCount() {
        return count;
    }
};

int Vehicle::count = 0;

class WaterTransport : public Vehicle {
public:
    void display() override {
        cout << "Water Transport" << endl;
    }
};

class RoadTransport : public Vehicle {
public:
    void display() override {
        cout << "Road Transport" <<endl;
    }
};

class AirTransport : public Vehicle {
public:
    void display() override {
        cout << "Air Transport" <<endl;
    }
};

int main() {
    WaterTransport taibah1;
    RoadTransport taibah2;
    AirTransport taibah3;

    cout << "Total number of objects created: " << Vehicle::getCount() << endl;

    taibah1.display();
    taibah2.display();
    taibah3.display();

    return 0;
}