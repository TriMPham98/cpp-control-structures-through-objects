// Write a program that calculates a car's gas milage. The program should ask the
// user to enter the number of gallons of gas the car can hold, and the number of miles
// it can be driven on a full tank. It should then display the number of miles that
// may be driven per gallon of gas.

#include <iostream>
using namespace std;

int main()
{
    double gasCapacity, milesPerTank;

    cout << "How many gallons of gas does your car hold?" << endl;
    cin >> gasCapacity;

    cout << "How many miles can the car be driven on a full tank?" << endl;
    cin >> milesPerTank;

    cout << "The MPG of your car is " << milesPerTank / gasCapacity << endl;
}