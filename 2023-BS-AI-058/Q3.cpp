#include <iostream>
#include <string>
using namespace std;
class Vehicle
 {
protected:
    static int totalObjects;
public:
    Vehicle() 
	{
        totalObjects++;
    }
    virtual ~Vehicle()
	 {
        totalObjects--;
    }
    virtual void display() const = 0;
    static int getTotalObjects() 
	{
        return totalObjects;
    }
};
int Vehicle::totalObjects = 0;
class WaterTransport : public Vehicle
 {
private:
    string type;
public:
    WaterTransport(string transportType) : type(transportType) {}
    void display() const override 
	{
    cout << "Water Transport: " << type << endl;
    }
};
class RoadTransport : public Vehicle
 {
private:
    string type;
public:
    RoadTransport(string transportType) : type(transportType) {}
    void display() const override
	 {
    cout << "Road Transport: " << type << endl;
    }
};
class AirTransport : public Vehicle 
{
private:
    string type;
public:
    AirTransport(string transportType) : type(transportType) {}
    void display() const override
	 {
    cout << "Air Transport: " << type << endl;
    }
};
int main()
 {
    WaterTransport boat("Boat");
    RoadTransport car("Car");
    AirTransport plane("Plane");
    cout << "Total objects created: " << Vehicle::getTotalObjects() << endl;
    boat.display();
    car.display();
    plane.display();
    return 0;
}
