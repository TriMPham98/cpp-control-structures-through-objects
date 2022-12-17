// This program asks the user to enter the numerator and denominator
// of a fraction and it displays the decimal value.

#include <iostream>
using namespace std;

int main()
{
    double numerator, denominator;

    cout << "The program shows the decimal value of a fraction." << endl;
    cout << "Enter the numerator: " << endl;
    cin >> numerator;
    cout << "Enter the denominator: " << endl;
    cin >> denominator;
    cout << "The decimal value is " << (numerator / denominator) << endl;

    return 0;
}