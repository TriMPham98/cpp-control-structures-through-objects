// Last month, Joe purchased some stock in Acme Software, Inc. Here are the
// details of the purchase:

// - The number of shares that Joe purchased was 1,000.
// - When Joe purchased the stock, he paid $45.50 per share.
// - Joe paid his stockbroker a commission that amounted to 2 percent of the
//   amount he paid for the stock.

// Two weeks later, Joe sold the stock. Here are the details of the sale:

// - The number of shares that Joe sold was 1,000.
// - He sold the stock for $56.90 per share.
// - He paid the stockbroker another commission that amounted to 2 percent of
//   the amount he received for the stock.

// Write a program that displays the following information:

// - The amount of money Joe paid for the stock.
// - The amount of commission Joe paid his broker when he bought the stock.
// - The amount that Joe sold the stock for.
// - The amount of commission Joe paid his broker when he sold the stock.
// - Display the amount of profit that Joe made after selling his stock and
//   paying the two commissions to his broker. (If the amount of profit that
//   your program displays is a negative number, the Joe lost money on the transaction.)

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numShares = 1000;
    float buyPrice = 45.50;
    float sellPrice = 56.90;
    float commissionRate = 0.02;

    float amountPaid = numShares * buyPrice;
    float commissionPaidBuy = amountPaid * commissionRate;
    float amountSold = numShares * sellPrice;
    float commissionPaidSell = amountSold * commissionRate;
    float profit = amountSold - amountPaid - commissionPaidBuy - commissionPaidSell;

    cout << fixed << setprecision(2);
    cout << "Amount paid for the stock: $" << amountPaid << endl;
    cout << "Commission paid when buying: $" << commissionPaidBuy << endl;
    cout << "Amount sold for: $" << amountSold << endl;
    cout << "Commission paid when selling: $" << commissionPaidSell << endl;
    cout << "Profit made: $" << profit << endl;

    return 0;
}