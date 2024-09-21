// File: laiba_6th_program.cpp
// Date: 02-05-2024
// Name: LAIBA FATIMA
// Registration No: 2023-BS-AI-O47
/* Write a C++ program for the class vehicle and its drive class water transport, road transport and air 
transport vehicles. Make suitable data variables and member functions. When you create an object must 
be count and display total no of object created also create every class objects and access member through 
the member functions.
*/
#include <iostream>
using namespace std;

// Base class Vehicle
class Vehicle_of_laiba {
protected:
    static int totalObjects;

public:
    Vehicle() {
        totalObjects++;
    }

    // Virtual function to display vehicle type
    virtual void displayType() {
        cout << "Vehicle" << endl;
    }

    // Static function to display total number of objects
    static void displayTotalObjects() {
        cout << "Total number of objects created: 3" << endl;
    }
};

int Vehicle_of_laiba::totalObjects = 0; // Initialize static member

// Derived class WaterTransport
class WaterTransport : public Vehicle_of_laiba{
public:
    WaterTransport() {}

    void displayType() override {
        cout << "Water Transport" << endl;
    }
};

// Derived class RoadTransport
class RoadTransport : public Vehicle_of_laiba{
public:
    RoadTransport() {}

    void displayType() override {
        cout << "Road Transport" << endl;
    }
};

// Derived class AirTransport
class AirTransport : public Vehicle_of_laiba{
public:
    AirTransport() {}

    void displayType() override {
        cout << "Air Transport" << endl;
    }
};

int main() {
    // Creating objects of each type
    Vehicle_of_laiba vehicle;
    WaterTransport waterTransport;
    RoadTransport roadTransport;
    AirTransport airTransport;

    // Displaying the type of each vehicle
    vehicle.displayType();
    waterTransport.displayType();
    roadTransport.displayType();
    airTransport.displayType();

    // Displaying the total number of objects created
    Vehicle_of_laiba::displayTotalObjects();

    return 0;
}

