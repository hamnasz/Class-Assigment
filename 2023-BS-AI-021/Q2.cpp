//2023-bs-ai-021
//yumna irfan
// Date: 02-05-2024
//carpool
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
    cout << "\nYour daily driving cost per person: " << dailyCostPerPerson << "\n";
    double totalSavings = (milesPerDay / milesPerGallon) * costPerGallon - dailyCostPerPerson;
    if (totalSavings > 0) {
        cout << "Money saved by carpooling per day: " << totalSavings << "\n";
    } else {
        cout << "Carpooling does not lead to savings compared to driving alone.\n";
    }
    return 0;
}