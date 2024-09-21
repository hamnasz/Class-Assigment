// File: problem 8 assignment no 3 oop.cpp
// Date: 01-05-2024
// Name: Ayesha Imran
// Registration No: 2023-BS-AI-057
/*(Car Pool Savings Calculator) Research several car-pooling websites. create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by carpooling, which also has other advantages such as reducing carbon emission and reducing traffic congestion. The application should input the following and display the user's cost per day of driving to word:
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon
d) Parking fees per day.
e) Toll per day.*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

// Function to convert number to words
string numberToWords(int num) {
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    if (num < 10)
        return ones[num];
    if (num < 20)
        return teens[num - 10];
    return tens[num / 10] + " " + ones[num % 10];
}

// Function to calculate and display cost per day in words
void calculateCostPerDay(double milesDriven, double costPerGallon, double avgMilesPerGallon, double parkingFees, double toll) {
    double gallonsUsed = milesDriven / avgMilesPerGallon;
    double costPerDay = gallonsUsed * costPerGallon + parkingFees + toll;

    cout << fixed << setprecision(2);
    cout << "Your daily driving cost is $" << costPerDay << endl;
    cout << "In words: ";

    // Convert cost to words
    int dollars = static_cast<int>(costPerDay);
    int cents = round((costPerDay - dollars) * 100);

    if (dollars == 0 && cents == 0) {
        cout << "Zero dollars";
    } else {
        cout << numberToWords(dollars) << " dollars";
        if (cents != 0) {
            cout << " and " << numberToWords(cents) << " cents";
        }
    }
    cout << " per day." << endl;
}

int main() {
    double milesDriven, costPerGallon, avgMilesPerGallon, parkingFees, toll;

    // Input values from the user
    cout << "Enter total miles driven per day: ";
    cin >> milesDriven;

    cout << "Enter cost per gallon of gasoline: ";
    cin >> costPerGallon;

    cout << "Enter average miles per gallon: ";
    cin >> avgMilesPerGallon;

    cout << "Enter parking fees per day: ";
    cin >> parkingFees;

    cout << "Enter toll per day: ";
    cin >> toll;

    // Calculate and display cost per day
    calculateCostPerDay(milesDriven, costPerGallon, avgMilesPerGallon, parkingFees, toll);

    return 0;
}
