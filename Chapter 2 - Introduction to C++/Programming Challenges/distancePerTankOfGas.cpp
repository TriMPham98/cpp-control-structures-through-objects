// A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town,
// and 28.9 miles per gallon when driven on the highway. Write a program that calculates
// and displays the distance the car can travel on one rank of gas when driven in town
// and when driven on the highway.
// Hint: The following formula can be used co calculate the distance:
// Distance = Number of Gallons X Average Miles per Gallon

#include <iostream>
using namespace std;

int main()
{
    double gasTank = 20;
    double mpgTown = 23.5;
    double mpgHighway = 28.9;

    cout << "The car can drive " << gasTank * mpgTown << " miles in town." << endl;
    cout << "The car can drive " << gasTank * mpgHighway << " miles on the highway." << endl;

    return 0;
}
