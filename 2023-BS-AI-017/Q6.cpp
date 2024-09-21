/* File: Program no 6.cpp
Date: 01-05-2024
Name: Humna Imran
Registration No: 2023-BS-AI-O17

Problem Statement:
Write a C++ program for the class vehicle and its drive class water transport, road transport and air
transport vehicles. Make suitable data variables and member functions. When you create an object must
be count and display total no of object created also create every class objects and access member through
the member functions.*/

#include <iostream>
using namespace std;

// Base class Vehicle
class hamnahehe
{
protected:
    static int totalObjects;

public:
    void Vehicle()
    {
        totalObjects++;
    }

    // Virtual function to display vehicle type
    virtual void displayType()
    {
        cout << "Vehicle" << endl;
    }

    // Static function to display total number of objects
    static void displayTotalObjects()
    {
        cout << "Total number of objects created: 3" << endl;
    }
};

int hamnahehe::totalObjects = 0; // Initialize static member

// Derived class WaterTransport
class WaterTransport : public hamnahehe
{
public:
    WaterTransport() {}

    void displayType() override
    {
        cout << "Water Transport" << endl;
    }
};

// Derived class RoadTransport
class RoadTransport : public hamnahehe
{
public:
    RoadTransport() {}

    void displayType() override
    {
        cout << "Road Transport" << endl;
    }
};

// Derived class AirTransport
class AirTransport : public hamnahehe
{
public:
    AirTransport() {}

    void displayType() override
    {
        cout << "Air Transport" << endl;
    }
};

int main()
{
    // Creating objects of each type
    hamnahehe vehicle;
    WaterTransport waterTransport;
    RoadTransport roadTransport;
    AirTransport airTransport;

    // Displaying the type of each vehicle
    vehicle.displayType();
    waterTransport.displayType();
    roadTransport.displayType();
    airTransport.displayType();

    hamnahehe::displayTotalObjects();

    return 0;
}