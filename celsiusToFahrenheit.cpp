// Write a program that converts Celsius temperatures to Fahrenheit temperatures.
// The formula is F = [(9/5) * C] + 32
// F is the Fahrenheit temperature, and C is the Celsius temperature.

#include <iostream>

using namespace std;

int main()
{
    double tempInC, tempInF;

    cout << "This program converts Celsius temperatures to Fahrenheit temperatures." << endl;
    cout << "Enter the temperature in Celsius: ";
    cin >> tempInC;

    tempInF = ((9.0 / 5) * tempInC) + 32;
    cout << "The temperature in Fahrenheit is: " << tempInF << "°F" << endl;

    return 0;
}