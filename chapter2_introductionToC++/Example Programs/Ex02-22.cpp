// This program calculates the amount of pay that will be contributed
// to a retirement plan if 5%, 7%, or 10% of monthly pay is withheld.
#include <iostream>
using namespace std;

int main()
{
    // Variables to hold the monthly pay and the amount of contribution.
    double monthlyPay = 6000.00, contribution;

    // Calculate and display a 5% contribution.
    contribution = monthlyPay * 0.05;
    cout << "5 percent is $" << contribution << " per month." << endl;

    // Calculate and display a 7% contribution.
    contribution = monthlyPay * 0.07;
    cout << "7 percent is $" << contribution << " per month." << endl;

    // Calculate and display a 10% contribution.
    contribution = monthlyPay * 0.10;
    cout << "10 percent is $" << contribution << " per month." << endl;

    return 0;
}