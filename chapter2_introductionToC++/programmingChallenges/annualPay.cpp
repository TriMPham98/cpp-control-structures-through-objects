// Suppose an employee gees paid every two weeks and earns $2,200 each pay period. In
// a year, the employee gees paid 26 times. Write a program that defines che following
// variables:

// payAmount: This variable will bold the amount of pay the employee earns each
// pay period. Initialize the variable with 2200.0.

// payPeriods: This variable will hold the number of pay periods in a year. Initialize
// the variable with 26.

// annualPay: This variable will hold the employee's total a111mal pay, which will
// be calculated.

// The program should calculate the employee's total annual pay by multiplying the
// employee's pay amount by the number of pay periods in a year and store the result in
// che annual Pay variable. Display the total annual pay on the screen.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double payAmount = 2200.00;
    int payPeriods = 26;
    double annualPay = payAmount * payPeriods;

    cout << "The total pay for 26 weeks at $2200.00 per week is $" << fixed << setprecision(2) << annualPay << endl;

    return 0;
}