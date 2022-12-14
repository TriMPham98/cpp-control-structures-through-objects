// A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
// program that calculates the number of miles per gallon the car gets. Display the result
// on the screen.
// Hint: Use the following formula to calculate miles per gallon (MPG):
// MPG = Miles Driven/Gallons of Gas Used

#include <iostream>
using namespace std;

int main()
{
    double gasCapacity = 15;
    double range = 375;
    double mpg = range / gasCapacity;

    cout << "The MPG of this car is " << mpg << endl;

    return 0;
}