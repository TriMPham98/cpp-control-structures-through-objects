// A county collects property taxes on the assessment value of property,
// which is 60 percent of the property's actual value. For example, if an
// acre of land is valued at $10,000, its assessment value is $6,000.
// The property tax is then 75¢ for each $100 of the assessment value.
// The tax for the acre assessed at $6,000 will be $45. Write a program that
// asks for the actual value of a piece of property and displays the assessment
// value and property tax.

#include <iostream>

using namespace std;

int main()
{
    double actualValue, assessmentValue, propertyTax;

    cout << "Enter the actual value of a piece of property: ";
    cin >> actualValue;

    assessmentValue = actualValue * 0.6;
    propertyTax = assessmentValue * 0.75 / 100;

    cout << "The assessment value is $" << assessmentValue << endl;
    cout << "The property tax is $" << propertyTax << endl;

    return 0;

}