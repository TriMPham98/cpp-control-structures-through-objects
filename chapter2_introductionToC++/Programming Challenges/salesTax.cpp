// Write a program that will compute the total sales tax on a $95 purchase.
// Assume the state sales tax is 4%, and the county sales tax is 2%.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double purchasePrice = 95.00;
    double stateTax = 0.04;
    double countyTax = 0.02;

    double totalTax = (purchasePrice * stateTax) + (purchasePrice * countyTax);

    cout << "The total tax of a $95 purchase is $" << fixed << setprecision(2) << totalTax << endl;

    return 0;
}