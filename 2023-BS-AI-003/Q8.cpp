#include <iostream>
using namespace std;
int main() {
    double milesDriven, costPerGallon, milesPerGallon, parkingFees, toll;

    cout << "Enter total miles driven per day: ";
    cin >> milesDriven;

    cout << "Enter cost per gallon of gasoline: ";
    cin >> costPerGallon;

    cout << "Enter average miles per gallon: ";
    cin >> milesPerGallon;

    cout << "Enter parking fees per day: ";
    cin >> parkingFees;

    cout << "Enter toll per day: ";
    cin >> toll;

    double gasCost = milesDriven / milesPerGallon * costPerGallon;
    double totalCost = gasCost + parkingFees + toll;

    cout << "Your daily driving cost is: $" << totalCost <<endl;
}
