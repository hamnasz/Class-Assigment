//1-MAY-2024
//SEEMAL MUSTAFA
//2023-BSAI-013
//OOP ASSIGNMENT

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
int main()
 {
    double tmdpd;
    double cpgog;
    double ampg;
    double pfpd;
    double tpd;
    cout << "Enter total miles driven per day: ";
    cin >> tmdpd;

    cout << "Enter cost per gallon of gasoline: ";
    cin >> cpgog;

    cout << "Enter average miles per gallon: ";
    cin >> ampg;

    cout << "Enter parking fees per day: ";
    cin >> pfpd;

    cout << "Enter toll per day: ";
    cin >>tpd;

    double tcpd = (tmdpd / ampg) * cpgog + pfpd + tpd;

    cout << "Your daily driving cost is: $" << tcpd << endl;

    return 0;
}