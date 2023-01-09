// Write a program that asks the user for an angle, entered in radians. The program
// should then display the sine, cosine, and tangent of the angle. (Use the sin,
// cos, and tan library functions to determine these values.) The output should
// be displayed in fixed-point notation, rounded to four decimal places of
// precision.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double angle;
    cout << "Enter an angle in radians: ";
    cin >> angle;
    cout << fixed << setprecision(4);
    cout << "Sine: " << sin(angle) << endl;
    cout << "Cosine: " << cos(angle) << endl;
    cout << "Tangent: " << tan(angle) << endl;
    return 0;
}