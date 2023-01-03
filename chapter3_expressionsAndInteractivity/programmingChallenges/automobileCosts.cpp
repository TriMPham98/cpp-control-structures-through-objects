// Write a program that asks the user to enter the monthly costs for the
// following expenses incurred from operating his or her automobile:
// loan payment, insurance, gas, oil, tires, and maintainence. The program
// should then display the total monthly cost of these expenses, and the
// total annual cost of these expenses.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double loan, insurance, gas, oil, tires, maintainence, total;

    cout << "This program calculates the monthly operating costs for your car." << endl;
    cout << "What's the cost of the loan?" << endl;
    cin >> loan;
    cout << "What's the cost of the insurance?" << endl;
    cin >> insurance;
    cout << "What's the cost of the gas?" << endl;
    cin >> gas;
    cout << "What's the cost of the oil?" << endl;
    cin >> oil;
    cout << "What's the cost of the tires?" << endl;
    cin >> tires;
    cout << "What's the cost of the maintainence?" << endl;
    cin >> maintainence;

    total = loan + insurance + gas + oil + tires + maintainence;

    cout << fixed << setprecision(2);
    cout << "The monthly total for operating your car is $" << total << endl;
}