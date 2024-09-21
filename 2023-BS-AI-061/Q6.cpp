//AYESHA IMRAN
//2023-BSAI-061
//PROGRAM 6

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
    WaterTransport AYESHA1;
    RoadTransport AYESHA2;
    AirTransport AYESHA3;

    cout << "Total number of objects created: " << Vehicle::getCount() << endl;

    AYESHA1.display();
    AYESHA2.display();
    AYESHA3.display();

    return 0;
}