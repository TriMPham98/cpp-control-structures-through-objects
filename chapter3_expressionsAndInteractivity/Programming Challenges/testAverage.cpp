// Write a program that asks for five test scores.
// The program should calculate the average test score
// and display it. The number displayed should be formatted in
// fixed-point notation, with one decimal point of precision.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double test1, test2, test3, test4, test5;
    double avg;

    cout << "This program calculates the average test score." << endl;
    cout << "Enter the score for test 1: ";
    cin >> test1;
    cout << "Enter the score for test 2: ";
    cin >> test2;
    cout << "Enter the score for test 3: ";
    cin >> test3;
    cout << "Enter the score for test 4: ";
    cin >> test4;
    cout << "Enter the score for test 5: ";
    cin >> test5;

    avg = (test1 + test2 + test3 + test4 + test5) / 5;

    cout << "The average score for the five test scores is: " << avg << endl;

    return 0;
}