// File: problem 6 assignment no 3 oop.cpp
// Date: 01-05-2024
// Name: Ayesha Imran
// Registration No: 2023-BS-AI-057
/*Write a C++ program for the class vehicle and its drive class water transport, road transport and air transport vehicles. 
Make suitable data variables and member functions.
 When you create an object must be count and display total no of object created also create every class objects and access member through the member functions.*/
#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    static int totalVehicles;

public:
    Vehicle() {
        totalVehicles++;
    }

    virtual ~Vehicle() {}

    virtual void displayType() const {
        cout << "Vehicle" <<endl;
    }

    static void displayTotal() {
        cout << "Total Vehicles: " << totalVehicles << endl;
    }
};

int Vehicle::totalVehicles = 0;

class WaterTransport : public Vehicle {
public:
    WaterTransport() : Vehicle() {}

    void displayType() const override {
        cout << "Water Transport" << endl;
    }
};

class RoadTransport : public Vehicle {
public:
    RoadTransport() : Vehicle() {}

    void displayType() const override {
        cout << "Road Transport" << endl;
    }
};

class AirTransport : public Vehicle {
public:
    AirTransport() : Vehicle() {}

    void displayType() const override {
        cout << "Air Transport" << endl;
    }
};

int main() {
    WaterTransport boat;
    RoadTransport car;
    AirTransport plane;

    cout << "Types of vehicles created:" << endl;
    boat.displayType();
    car.displayType();
    plane.displayType();

    Vehicle::displayTotal();

    return 0;
}
