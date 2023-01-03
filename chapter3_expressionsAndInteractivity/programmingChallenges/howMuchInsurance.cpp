// Many financial  experts advise that property owners should
// insure their homes or buildings for at least 80 percent
// of the amount it would cost to replace the structure. Write
// a program that asks for the user to enter the replacement cost
// of a building, then displays the minimum amount of insurance
// he or she should buy for the property.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // Ask the user to enter the replacement cost of the building
  cout << "Enter the replacement cost of the building: ";
 
  // Read the replacement cost from the input
  double replacementCost;
  cin >> replacementCost;
 
  // Calculate the minimum amount of insurance the user should buy
  double insuranceAmount = replacementCost * 0.8;
 
  // Display the minimum amount of insurance the user should buy with 2 decimal points
  cout << fixed << setprecision(2);
  cout << "You should buy at least $" << insuranceAmount << " of insurance for your property." << endl;
 
  return 0;
}
