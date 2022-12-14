// Joe's Pizza Palace needs a program to calculate the number of slices a pizza of any
// size can be divided into. The program should perform the following steps:
// A) Ask the user for the diameter of the pizza in inches.
// B) Calculate the number of slices that may be taken from a pizza of that size.
// C) Display a message telling the number of slices.
// To calculate the number of slices that may be taken from the pizza, you must know
// the following facts:
// - Each slice should have an area of 14.125 inches.
// - To calculate the number of slices, simply divide the area of the pizza by 14.125.
// - The area of the pizza is calculated with this formula:
// Area = PI * r ^ 2
// Note: PI is the Greek letter pi. 3.14159 can be used as its value. The variable r
// is the radius of the pizza. Divide the diameter by 2 to get the radius.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // A) Ask the user for the diameter of the pizza in inches.
    double diameter;
    cout << "Enter the diameter of the pizza in inches: ";
    cin >> diameter;

    // B) Calculate the number of slices that may be taken from a pizza of that size.
    const double PI = 3.14159;
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);
    int numSlices = area / 14.125;

    // C) Display a message telling the number of slices.
    cout << "The number of slices that can be taken from this pizza is: " << numSlices << endl;

    return 0;
}
