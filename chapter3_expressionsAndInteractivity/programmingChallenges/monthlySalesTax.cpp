// A retail company must file a monthly sales tax report listing the sales
// for the month and the amount of sales tax collected. Write a program that
// asks for the month, the year, and the total amount collected at the cash
// register (i.e. sales plus sales tax). Assume the state tax is 4 percent,
// and the county sales tax is 2 percent. If the total amount collected is known
// and the total sales tax is 6 percent, the amount of product sales may be
// calculated as S = (T / 1.06)
// S is the product sales and T is the total income (product sales plus sales
// tax). The program should display a report similar to:
//
// Month: October
// -------------------------
// Total Collected:     $ 26572.89
// Sales:               $ 25068.76
// County Sales Tax:    $ 501.38
// State Sales Tax:     $ 1002.75
// Total Sales Tax:     $ 1504.13

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string month;
    int year;
    double totalCollected, sales, countySalesTax, stateSalesTax, totalSalesTax;

    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the total amount collected at the cash register: ";
    cin >> totalCollected;

    sales = totalCollected / 1.06;
    countySalesTax = sales * 0.02;
    stateSalesTax = sales * 0.04;
    totalSalesTax = countySalesTax + stateSalesTax;

    cout << fixed << showpoint << setprecision(2);
    
}