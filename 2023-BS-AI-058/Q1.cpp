#include <iostream>
#include <iomanip>
#include <cmath>                       

class CarPoolCalculator {
private:
    double totalMiles;
    double costPerGallon;
    double avgMilesPerGallon;
    double parkingFees;
    double tollPerDay;

public:
    CarPoolCalculator(double miles, double costPerGal, double avgMPG, double parking, double toll)
        : totalMiles(miles), costPerGallon(costPerGal), avgMilesPerGallon(avgMPG), parkingFees(parking), tollPerDay(toll) {}

    double calculateDailyCost() const {
        double gallonsUsed = totalMiles / avgMilesPerGallon;
        double fuelCost = gallonsUsed * costPerGallon;
        return fuelCost + parkingFees + tollPerDay;
    }

    void displaySavings(double carpoolCost) const {
        double dailyCost = calculateDailyCost();
        double savings = dailyCost - carpoolCost;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Your daily driving cost: $" << dailyCost << std::endl; 
        std::cout << "Potential savings with carpooling: $" << savings << std::endl;

        if (savings > 0)
            std::cout << "You could save money by carpooling!" << std::endl;      
        else if (savings < 0)
            std::cout << "You're already saving money compared to carpooling!" << std::endl;
        else
            std::cout << "Your daily cost is the same whether you carpool or not." << std::endl;
    }
};

int main() {
    double miles, costPerGal, avgMPG, parking, toll;
    
    std::cout << "Enter total miles driven per day: ";
    std::cin >> miles;

    std::cout << "Enter cost per gallon of gasoline: ";
    std::cin >> costPerGal;

    std::cout << "Enter average miles per gallon: ";
    std::cin >> avgMPG;

    std::cout << "Enter parking fees per day: ";
    std::cin >> parking;

    std::cout << "Enter toll per day: ";
    std::cin >> toll;

    CarPoolCalculator calculator(miles, costPerGal, avgMPG, parking, toll);

    // Assume carpool cost is $10 per day
    double carpoolCost = 10.0;

    calculator.displaySavings(carpoolCost);

    return 0;
}
