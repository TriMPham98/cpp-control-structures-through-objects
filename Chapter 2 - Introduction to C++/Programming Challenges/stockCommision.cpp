// Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her
// stockbroker a 2 percent commission for the transaction. Write a program that calculates
// and displays the following:
// - The amount paid for the stock alone (without the commission.)
// - The amount of the commission.
// - The total amount paid (for the stock plus the commission).

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double numShares = 750;
    double pricePerShare = 35.00;
    double commission = 0.02;

    cout << "Stock price only: $" << fixed << setprecision(2) << numShares * pricePerShare << endl;
    cout << "Commission: $ " << fixed << setprecision(2) << numShares * pricePerShare * commission << endl;
    cout << "Total amount paid: $" << fixed << setprecision(2) << (numShares * pricePerShare) + (numShares * pricePerShare * commission) << endl;
}