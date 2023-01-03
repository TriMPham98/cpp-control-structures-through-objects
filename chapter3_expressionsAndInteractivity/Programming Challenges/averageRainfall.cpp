// Write a program that calculates the average rainfall for three months.
// The program should ask the user to enter the name of each
// month, such as June or July, and the amount of rain (in inches)
// that fell each month. The program should display a message similar
// to the following:

// The average rainfall for June, July, and August is 6.72 inches.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string month1, month2, month3;
    double rainMonth1, rainMonth2, rainMonth3;
    double avg;

    cout << "This program calculates the average rainfall for three months." << endl;
    cout << "Enter the name of month 1 and its rainfall in inches:" << endl;
    cin >> month1;
    cin >> rainMonth1;
    cout << "Enter the name of month 2 and its rainfall in inches:" << endl;
    cin >> month2;
    cin >> rainMonth2;
    cout << "Enter the name of month 3 and its rainfall in inches:" << endl;
    cin >> month3;
    cin >> rainMonth3;

    avg = (rainMonth1 + rainMonth2 + rainMonth3) / 3;
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << avg << " inches." << endl;

    return 0;
}