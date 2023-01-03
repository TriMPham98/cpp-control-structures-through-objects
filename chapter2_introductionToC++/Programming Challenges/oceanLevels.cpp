// Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write
// a program that displays:

//  The number of millimeters higher than the current level that the ocean's level will
// be in 5 years.

// The number of millimeters higher than the current level that the ocean's level will
// be in 7 years.

// The number of millimeters higher than the current level that the ocean's level will
// be in 10 years.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double oceanRiseRate = 1.5;

    cout << "In 5 years, the ocean's level will be " << fixed << setprecision(1) << oceanRiseRate * 5 << " millimeters higher." << endl;
    cout << "In 7 years, the ocean's level will be " << fixed << setprecision(1) << oceanRiseRate * 7 << " millimeters higher." << endl;
    cout << "In 10 years, the ocean's level will be " << fixed << setprecision(1) << oceanRiseRate * 10 << " millimeters higher." << endl;

    return 0;
}