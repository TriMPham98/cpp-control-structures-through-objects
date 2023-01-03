// An electronics company sells circuit boards at a 35 percent profit. Write a program that
// will calculate the selling price of a circuit board that costs $14.95. Display the result
// on the screen.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double profit = 0.35;
    double circuitBoardPrice = 14.95;
    double sellingPrice = circuitBoardPrice + (circuitBoardPrice * profit);

    cout << "The selling price of the circuit board is $" << fixed << setprecision(2) << sellingPrice << endl;

    return 0;
}