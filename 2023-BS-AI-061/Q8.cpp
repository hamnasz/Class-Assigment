//AYESHA IMRAN
//2023-BSAI-061
//PROGRAM 8
#include <iostream>


 using namespace std;

int main() {
    double total_miles, cost_per_gallon, avg_miles_per_gallon, parking_fees, toll;

    // Input values
    cout << "Enter total miles driven per day: ";
    cin >> total_miles;

    cout << "Enter cost per gallon of gasoline: ";
    cin >> cost_per_gallon;

    cout << "Enter average miles per gallon: ";
    cin >> avg_miles_per_gallon;

    cout << "Enter parking fees per day: ";
    cin >> parking_fees;

    cout << "Enter toll per day: ";
    cin >> toll;

    // Calculation
    double daily_cost = (total_miles / avg_miles_per_gallon) * cost_per_gallon + parking_fees + toll;

    // Display result
    cout << fixed << setprecision(2);
    cout << "Your daily driving cost is $" << daily_cost << endl;

    return 0;
}
