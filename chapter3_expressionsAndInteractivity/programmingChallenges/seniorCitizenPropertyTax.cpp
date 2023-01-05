// Madison County provides a $5,000 homestead exemption for senior citizens.
// For example, if a senior's house is value at $158,000, the assessment value
// is $94,800, as explained above. However, he would only pay tax on $89,800.
// At last year's tax rate of $2.64 per $100 of assessment value, the tax
// would be $2,370.72. In addition to the tax break, senior citizens are allowed
// to pay their property tax in four equal payments. The quarterly payment due
// on this property would be $592.68. Write a program that asks for the actual
// value of a piece of property and the current tax rate for each $100 of
// assessed value. The program should then calculate and report how much annual
// property tax a senior homeowner will be charged for this property, and what
// the quarterly tax bill will be.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables
    double propertyValue, taxRate, assessmentValue, annualTax, quarterlyTax;

    // Get property value and tax rate
    cout << "Enter the actual value of a piece of property: ";
    cin >> propertyValue;
    cout << "Enter the current tax rate for each $100 of assessed value: ";
    cin >> taxRate;

    // Calculate assessment value
    assessmentValue = propertyValue - 5000;

    // Calculate annual tax
    annualTax = (assessmentValue / 100) * taxRate;

    // Calculate quarterly tax
    quarterlyTax = annualTax / 4;

    
}