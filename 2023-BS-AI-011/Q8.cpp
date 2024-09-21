//ayesha imran
//2023-bsai-011
//oops

//(Car Pool Savings Calculator) Research several car-pooling websites. create an application that calculates
//your daily driving cost, so that you can estimate how much money could be saved by carpooling, which
//also has other advantages such as reducing carbon emission and reducing traffic congestion. The
//application should input the following and display the user's cost per day of driving to word:
//a) Total miles driven per day.
//b) Cost per gallon of gasoline.
//c) Average miles per gallon
//d) Parking fees per day.
//e) Toll per day.

#include <iostream>
using namespace std;
//mpd=milesperday
//cpg=costpergallon
//mpg=milespergallon
//pf=parkingfee
double calculateDrivingCost(double mpd, double cpg, double mpg, double pf, double toll, int numPeople) {
    double gasCost = (mpd / mpg) * cpg;
    double totalCost = gasCost + pf + toll;
    double costPerPerson = totalCost / numPeople;
    return costPerPerson;
}

int main() {
    double mpd, cpg, mpg, pf, toll;
    int numPeople;

    cout << "\t\tCar Pool Savings Calculator\n\n";

    cout << "Enter total miles driven per day: ";
    cin >> mpd;

    cout << "Enter cost per gallon of gasoline: ";
    cin >> cpg;

    cout << "Enter average miles per gallon: ";
    cin >> mpg;

    cout << "Enter parking fees per day: ";
    cin >> pf;

    cout << "Enter toll per day: ";
    cin >> toll;

    cout << "Enter number of people in the carpool (including yourself): ";
    cin >> numPeople;

    double dailyCostPerPerson = calculateDrivingCost(mpd, cpg, mpg, pf, toll, numPeople);

    cout << "\nYour daily driving cost per person: $" << dailyCostPerPerson << "\n";

    double totalSavings = (mpd / mpg) * cpg - dailyCostPerPerson;

    if (totalSavings > 0) {
        cout << "Money saved by carpooling per day: $" << totalSavings << "\n";
    } else {
        cout << "Carpooling does not lead to savings compared to driving alone.\n";
    }

    return 0;
}
