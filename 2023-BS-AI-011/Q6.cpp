//ayesha imran
//2023-bsai-011
//oops

//Write a C++ program for the class vehicle and its drive class water transport, road transport and air
//transport vehicles. Make suitable data variables and member functions. When you create an object must
//be count and display total no of object created also create every class objects and access member through
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

    void displayCount() {
        cout << "Total number of vehicles: " << count << endl;
    }
};

// Initialize static variable count
int Vehicle::count = 0;

class WaterTransport : public Vehicle {
public:
    void displayType() {
        cout << "Water Transport" << endl;
    }
};

class RoadTransport : public Vehicle {
public:
    void displayType() {
        cout << "Road Transport" << endl;
    }
};

class AirTransport : public Vehicle {
public:
    void displayType() {
        cout << "Air Transport" << endl;
    }
};

int main() {
    // Creating objects of each class
    WaterTransport waterVehicle;
    RoadTransport roadVehicle;
    AirTransport airVehicle;

    // Displaying type and total count of vehicles
    waterVehicle.displayType();
    waterVehicle.displayCount();

    roadVehicle.displayType();
    roadVehicle.displayCount();

    airVehicle.displayType();
    airVehicle.displayCount();

    return 0;
}

