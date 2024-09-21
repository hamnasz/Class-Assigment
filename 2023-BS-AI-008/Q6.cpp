//1-MAY-2024
//Mohammad Mukedas
//2023-BSAI-008
//OOP ASSIGNMENT
#include<iostream>
#include <string>
using namespace std;
class vehicle {
public:
    vehicle() { 
	total_objects++; 
	}
    ~vehicle() { 
	total_objects--; 
	}
    static int get_total_objects() { 
	return total_objects; 
	}
    void display() {
        cout << "Name: " << name << ", Type: Vehicle, Total Objects: " << get_total_objects() << endl;
    }
    static int total_objects;
    string name;
};
int vehicle::total_objects = 0;
class water_transport : public vehicle {
public:
    water_transport(string n) {
        name = n;
        total_objects++;
    }
    ~water_transport() { total_objects--; }
};

class road_transport : public vehicle {
public:
    road_transport(string n) {
        name = n;
        total_objects++;
    }
    ~road_transport() { total_objects--; }
};
class air_transport : public vehicle {
public:
    air_transport(string n) {
        name = n;
        total_objects++;
    }
    ~air_transport() { total_objects--; }
};
int main() {
    water_transport W1("Boat"), W2("Ship");
    W1.display();
    W2.display();
    road_transport R1("Car"), R2("Truck");
    R1.display();
    R2.display();
    air_transport A1("Plane"), A2("Helicopter");
    A1.display();
    A2.display();
    cout << "Total Vehicle Objects: " << vehicle::get_total_objects() << endl;
    return 0;
}
