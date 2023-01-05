// Assuming there are no deposits other than the original investment,
// the balance in a savings account after one year may be calculated as
// Amount = Principal * (1 + Rate/T) ^ (T * Years)
// Principal is the balance in the savings account, Rate is the annual
// interest rate, and T is the number of times the interest is compounded
// during a year. T is 4 if the interest is compounded quarterly.

// Write a program that asks for the principal, the rate, and the number
// of times the interest is compounded. The program should display a report
// similar to:

// Interest Rate: 4.25%
// Times Compounded: 12
// Principal: $ 1000.00
// Interest: $ 43.34
// Amount in Savings: $ 1043.34

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
  double principal;
  cout << "Enter the principal: ";
  cin >> principal;

  double rate;
  cout << "Enter the annual interest rate: ";
  cin >> rate;

  int times_compounded;
  cout << "Enter the number of times the interest is compounded: ";
  cin >> times_compounded;

  double amount = principal * pow(1 + rate/times_compounded, times_compounded * 1);
  double interest = amount - principal;

  cout << fixed << setprecision(2);
  cout << "Interest Rate: " << rate << "%" << endl;
  cout << "Times Compounded: " << times_compounded << endl;
  cout << "Principal: $" << principal << endl;
  cout << "Interest: $" << interest << endl;
  cout << "Amount in Savings: $" << amount << endl;
  return 0;
}
