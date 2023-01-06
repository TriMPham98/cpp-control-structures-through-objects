// The monthly payment on a loan may be calculated by the following formula:
// Payment = (Rate * (1 + Rate)^N) / ((1 + Rate)^N - 1) * L
// Rate is the monthly interest rate, which is the annual interest rate divided
// by 12. (12 percent annual interest would be 1 percent monthly interest.) N is the
// number of payments, and L is the amount of the loan. Write a program that asks for
// these values then displays a report similar to:
// Loan Amount:                 $ 10000.00
// Monthly Interest Rate:               1%
// Number of Payments:                  36
// Monthly Payment:             $   332.14
// Amount Paid Back:            $ 11957.15
// Interest Paid:               $  1957.15

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
}