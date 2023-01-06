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
#include <cmath>

using namespace std;

int main()
{

    double Payment, Rate, N, L, AmountPaidBack, InterestPaid;

    cout << "Enter the loan amount: ";
    cin >> L;

    cout << "Enter the monthly interest rate (in percent): ";
    cin >> Rate;
    Rate /= 100; // convert percentage to decimal

    cout << "Enter the number of payments: ";
    cin >> N;

    Payment = (Rate * pow((1 + Rate), N)) / (pow((1 + Rate), N) - 1) * L;

    AmountPaidBack = Payment * N;
    InterestPaid = AmountPaidBack - L;

    cout << fixed << setprecision(2);
    cout << "Loan Amount: $" << setw(10) << L << endl;
    cout << "Monthly Interest Rate: " << setw(10) << Rate << "%" << endl;
    cout << "Number of Payments: " << setw(10) << N << endl;
    cout << "Monthly Payment: $" << setw(10) << Payment << endl;
    cout << "Amount Paid Back: $" << setw(10) << AmountPaidBack << endl;
    cout << "Interest Paid: $" << setw(10) << InterestPaid << endl;

    return 0;
}