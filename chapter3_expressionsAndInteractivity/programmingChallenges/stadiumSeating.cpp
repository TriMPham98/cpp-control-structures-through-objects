// There are three seating categories at a stadium. For a softball
// game, Class A seats cost $15, Class B seats cost $12, and Class
// C seats cost $9. Write a program that asks how many tickets
// for each class of seats were sold, then displays the amount
// of income generated from ticket sales. Format your dollar amount
// in fixed-point notation, with two decimal places of precision,
// and be sure the decimal point is always displayed.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double CLASS_A_PRICE = 15, CLASS_B_PRICE = 12, CLASS_C_PRICE = 9;

    int numTixA, numTixB, numTixC;
    double totalIncome;

    cout << "This program calculates the income of a softball game based on the number of tickets per class." << endl;
    cout << "How many class A tickets were sold at $15? ";
    cin >> numTixA;
    cout << "How many class B tickets were sold at $12? ";
    cin >> numTixB;
    cout << "How many class C tickets were sold at $9? ";
    cin >> numTixC;

    totalIncome = (numTixA * CLASS_A_PRICE) + (numTixB * CLASS_B_PRICE) + (numTixC * CLASS_C_PRICE);
    cout << fixed << setprecision(2);
    cout << "The total income generated from ticket sales are $" << totalIncome << endl;

    return 0;
}