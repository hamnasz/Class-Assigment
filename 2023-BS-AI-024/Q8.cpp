//taibah shahbaz 
//2023-BSAI-024
//OOP ASSIGNMENT
//(Car Pool Savings Calculator) Research several car-pooling websites. create an application that calculates your daily driving cost, 
//so that you can estimate how much money could be saved by carpooling, which also has other advantages such as reducing carbon emission 
//and reducing traffic congestion. The application should input the following and display the user's cost per day of driving to word:
//a) Total miles driven per day.
//b) Cost per gallon of gasoline.
//c) Average miles per gallon
//d) Parking fees per day.
//e) Toll per day
#include <iostream>
using namespace std;

double calculateDrivingCost(double milesPerDay, double costPerGallon, double milesPerGallon, double parkingFee, double toll, int numPeople) {
    double gasCost = (milesPerDay / milesPerGallon) * costPerGallon;
    double totalCost = gasCost + parkingFee + toll;
    double costPerPerson = totalCost / numPeople;
    return costPerPerson;
}

int main() {
    double milesPerDay, costPerGallon, milesPerGallon, parkingFee, toll;
    int numPeople;

    cout << "\t\tCar Pool Savings Calculator\n\n";

    cout << "Enter total miles driven per day: ";
    cin >> milesPerDay;

    cout << "Enter cost per gallon of gasoline: ";
    cin >> costPerGallon;

    cout << "Enter average miles per gallon: ";
    cin >> milesPerGallon;

    cout << "Enter parking fees per day: ";
    cin >> parkingFee;

    cout << "Enter toll per day: ";
    cin >> toll;

    cout << "Enter number of people in the carpool (including yourself): ";
    cin >> numPeople;

    double dailyCostPerPerson = calculateDrivingCost(milesPerDay, costPerGallon, milesPerGallon, parkingFee, toll, numPeople);

    cout << "\nYour daily driving cost per person: $" << dailyCostPerPerson << "\n";

    double totalSavings = (milesPerDay / milesPerGallon) * costPerGallon - dailyCostPerPerson;

    if (totalSavings > 0) {
        cout << "Money saved by carpooling per day: $" << totalSavings << "\n";
    } else {
        cout << "Carpooling does not lead to savings compared to driving alone.\n";
    }

    return 0;
}