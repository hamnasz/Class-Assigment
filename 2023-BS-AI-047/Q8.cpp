// File: laiba_7th_program.cpp
// Date: 02-05-2024
// Name: LAIBA FATIMA
// Registration No: 2023-BS-AI-O47
/* (Car Pool Savings Calculator) Research several car-pooling websites. create an application that calculates 
your daily driving cost, so that you can estimate how much money could be saved by carpooling, which 
also has other advantages such as reducing carbon emission and reducing traffic congestion. The 
application should input the following and display the user's cost per day of driving to word:
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon
d) Parking fees per day.
e) Toll per day
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Function to calculate the daily driving cost
double calculateCost(double totalMiles, double costPerGallon, double avgMilesPerGallon, double parkingFees, double tollPerDay) {
    double totalCost = (totalMiles / avgMilesPerGallon) * costPerGallon + parkingFees + tollPerDay;
    return totalCost;
}

// Function to convert a number to words
string numberToWords(int num) {
    string result;
    if (num == 0) {
        return "zero";
    }
    const string onesPlace[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const string tensPlace[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    const string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    int billion = num / 1000000000;
    if (billion > 0) {
        result += numberToWords(billion) + " billion ";
        num %= 1000000000;
    }

    int million = num / 1000000;
    if (million > 0) {
        result += numberToWords(million) + " million ";
        num %= 1000000;
    }

    int thousand = num / 1000;
    if (thousand > 0) {
        result += numberToWords(thousand) + " thousand ";
        num %= 1000;
    }

    int hundred = num / 100;
    if (hundred > 0) {
        result += numberToWords(hundred) + " hundred ";
        num %= 100;
    }

    int ten = num / 10;
    int one = num % 10;

    if (ten > 1) {
        result += tensPlace[ten] + " ";
        if (one > 0) {
            result += onesPlace[one];
        }
    } else if (ten == 1) {
        result += teens[one];
    } else if (one > 0) {
        result += onesPlace[one];
    }

    return result;
}

int main() {
    double totalMiles, costPerGallon, avgMilesPerGallon, parkingFees, tollPerDay;

    // Input values
    cout << "Enter total miles driven per day by laiba: ";
    cin >> totalMiles;
    cout << "Enter cost per gallon of gasoline by laiba: $";
    cin >> costPerGallon;
    cout << "Enter average miles per gallon by laiba: ";
    cin >> avgMilesPerGallon;
    cout << "Enter parking fees per day by laiba: $";
    cin >> parkingFees;
    cout << "Enter toll per day by laiba: $";
    cin >> tollPerDay;

    // Calculate daily driving cost
    double totalCost = calculateCost(totalMiles, costPerGallon, avgMilesPerGallon, parkingFees, tollPerDay);

    // Display the cost in words
    cout << "laiba Your daily driving cost is approximately $" << totalCost << " or " << numberToWords(static_cast<int>(totalCost)) << " dollars." << endl;

    return 0;
}
