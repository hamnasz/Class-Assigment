//2023-bs-ai-021
//yumna irfan
// Date: 02-05-2024
//class vehical
#include <iostream>
using namespace std;
class Vehicle {
private:
    static int totalCount;
public:
    Vehicle() {
        totalCount++;
    }
    virtual void display() = 0;
    static void displayTotalCount() {
       cout << "Total number of vehicles: " << totalCount <<endl;
    }
};
int Vehicle::totalCount = 0;
class WaterTransport : public Vehicle {
public:
    void display() override {
       cout << "This is a water transport vehicle" <<endl;
    }
};
class RoadTransport : public Vehicle {
public:
    void display() override {
       cout << "This is a road transport vehicle." <<endl;
    }
};
class AirTransport : public Vehicle {
public:
    void display() override {
        cout << "This is an air transport vehicle." <<endl;
    }
};
int main() {
    WaterTransport waterVehicle;
    RoadTransport roadVehicle;
    AirTransport airVehicle;

    waterVehicle.display();
    roadVehicle.display();
    airVehicle.display();
    
    Vehicle::displayTotalCount();
    return 0;
}