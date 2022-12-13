// Write a program that computes the tax and tip on a restaurant bill for a patron with
// a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip
// should be 20 percent of the total after adding the tax. Display the meal cost, tax amount,
// tip amount, and total bill on the screen.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double mealBill = 88.67, totalBill;
    double taxRate = 0.0675;
    double tipRate = 0.20, tipAmount;

    double taxAmount = mealBill * taxRate;
    tipAmount = (mealBill + taxAmount) * tipRate;
    totalBill = mealBill + taxAmount + tipAmount;

    cout << "The meal bill is $" << fixed << setprecision(2) << mealBill << endl;
    cout << "The tax amount is $" << fixed << setprecision(2) << taxAmount << endl;
    cout << "The tip amount is $" << fixed << setprecision(2) << tipAmount << endl;
    cout << "The total is $" << fixed << setprecision(2) << totalBill << endl;

    return 0;
}