// A customer in a store is purchasing five items. The prices of the five items are as follows:

// Price of item 1 = $15.95
// Price of item 2 = $24.95
// Price of item 3 = $6.95
// Price of item 4 = $12.95
// Price of item 5 = $3.95

// Write a program that holds the prices of the five items in five variables.
// Display each item's price, the subtotal of the sale, the amount of sales tax, and the total.
// Assume the sales tax is 7 percent.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95;
    double subtotal = item1 + item2 + item3 + item4 + item5;
    double salesTax = 0.07;
    double taxAmount = salesTax * subtotal;

    cout << "Item 1's price: $" << item1 << endl;
    cout << "Item 2's price: $" << item2 << endl;
    cout << "Item 3's price: $" << item3 << endl;
    cout << "Item 4's price: $" << item4 << endl;
    cout << "Item 5's price: $" << item5 << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales tax: $ " << fixed << setprecision(2) << taxAmount << endl;
    cout << "Total price: $" << subtotal + taxAmount << endl;

    return 0;
}