/* File: Program no 6.cpp
Date: 01-05-2024
Name: Humna Imran
Registration No: 2023-BS-AI-O17

Problem Statement:
(Car Pool Savings Calculator) Research several car-pooling websites. create an application that calculates
your daily driving cost, so that you can estimate how much money could be saved by carpooling, which
also has other advantages such as reducing carbon emission and reducing traffic congestion. The
application should input the following and display the user's cost per day of driving to word:
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon
d) Parking fees per day.
e) Toll per day*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double totalMiles, costPerGallon, avgMilesPerGallon, parkingFees, tollPerDay;
    double costPerDay;

    cout << "Enter total miles driven per day: ";
    cin >> totalMiles;
    cout << "Enter cost per gallon of gasoline: $";
    cin >> costPerGallon;
    cout << "Enter average miles per gallon: ";
    cin >> avgMilesPerGallon;
    cout << "Enter parking fees per day: $";
    cin >> parkingFees;
    cout << "Enter toll per day: $";
    cin >> tollPerDay;

    costPerDay = (totalMiles / avgMilesPerGallon) * costPerGallon + parkingFees + tollPerDay;

    cout << fixed << setprecision(2);
    cout << "Your daily driving cost is: $" << costPerDay << endl;

    cout << "By carpooling, you could save money, reduce carbon emissions, and alleviate traffic congestion." << endl;
    return 0;
}