// File: 6_vehicle.cpp
// Date: 01-05-2024
// Name: Mishal Nadeem
// Registration No: 2023-BS-AI-020
//Write a C++ program for the class vehicle and its drive class water transport, road transport and air transport vehicles. Make suitable data variables and member functions. When you create an object must be count and display total no of object created also create every class objects and access member through the member functions

#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    static int totalObjects; // Static variable to count total objects
    string type;
public:
    // Constructor
    Vehicle(string t) : type(t) {
        totalObjects++; // Increment total objects count upon object creation
    }
    // Virtual destructor
    virtual ~Vehicle() {}
    // Display function
    virtual void display() const {
        cout << "Type: " << type << endl;
    }
    // Static member function to get total objects count
    static int getTotalObjects() {
        return totalObjects;
    }
};
int Vehicle::totalObjects = 0; // Initialize static variable
class WaterTransport : public Vehicle {
private:
    string waterType;
public:
    // Constructor
    WaterTransport(string t, string wType) : Vehicle(t), waterType(wType) {}
    // Display function (override)
    void display() const override {
        cout << "Water Type: " << waterType << endl;
        Vehicle::display(); // Call base class display function
    }
};
class RoadTransport : public Vehicle {
private:
    int wheels;
public:
    // Constructor
    RoadTransport(string t, int w) : Vehicle(t), wheels(w) {}
    // Display function (override)
    void display() const override {
        cout << "Number of Wheels: " << wheels << endl;
        Vehicle::display(); // Call base class display function
    }
};
class AirTransport : public Vehicle {
private:
    int engines;
public:
    // Constructor
    AirTransport(string t, int e) : Vehicle(t), engines(e) {}
    // Display function (override)
    void display() const override {
        cout << "Number of Engines: " << engines << endl;
        Vehicle::display(); // Call base class display function
    }
};
int main() {
    // Create objects of different transport types
    WaterTransport mishal_water("Boat", "Ship");
    RoadTransport mishal_road("Car", 4);
    AirTransport mishal_air("Plane", 2);
    // Display details of each transport object
    cout << "Details of Water Transport:\n";
    mishal_water.display();
    cout << endl;
    cout << "Details of Road Transport:\n";
    mishal_road.display();
    cout << endl;
    cout << "Details of Air Transport:\n";
    mishal_air.display();
    cout << endl;
    // Display total number of objects created
    cout << "Total number of objects created: " << Vehicle::getTotalObjects() << endl;
    return 0;
}
