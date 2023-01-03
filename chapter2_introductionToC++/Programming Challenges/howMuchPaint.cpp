// A particular brand of paint covers 340 square feet per gallon.
// Write a program to determine and report approximately how many
// gallons of paint will be needed to paint two coats on a wooden fence
// that is 6 feet high and 100 feet long.

#include <iostream>
using namespace std;

int main()
{
    double sqFtPerGalPaint = 340;
    double areaToPaint = 6 * 100;

    cout << "You will need " << areaToPaint / sqFtPerGalPaint
         << " gallons of paint to cover a fence that is 6ft high and 100 ft long." << endl;
}