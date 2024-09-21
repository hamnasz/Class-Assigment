#include <iostream>
using namespace std;

class Vehicle {
protected:
    static int count;
    string name;

public:
    Vehicle(string n) : name(n) {
        count++;
    }

    virtual void display() {
        cout << "Vehicle: " << name <<endl;
    }

    static int getTotal() {
        return count;
    }
};

int Vehicle::count = 0;

class WaterTransport : public Vehicle {
public:
    WaterTransport(string n) : Vehicle(n) {}

    void display() {
        Vehicle::display();
        cout << "Water Transport" <<endl;
    }
};

class RoadTransport : public Vehicle {
public:
    RoadTransport(string n) : Vehicle(n) {}

    void display() {
        Vehicle::display();
        cout << "Road Transport" <<endl;
    }
};

class AirTransport : public Vehicle {
public:
    AirTransport(string n) : Vehicle(n) {}

    void display() {
        Vehicle::display();
        cout << "Air Transport" << std::endl;
    }
};

int main() {
    Vehicle v1("Vehicle1");
    WaterTransport wt1("WaterTransport1");
    RoadTransport rt1("RoadTransport1");
    AirTransport at1("AirTransport1");

    v1.display();
    wt1.display();
    rt1.display();
    at1.display();

    cout << "Total Vehicles: " << Vehicle::getTotal() <<endl;
}