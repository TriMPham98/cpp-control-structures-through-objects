// The average July high temperature is 85 degrees Fahrenheit in New York City, 88 degrees
// Fahrenheit in Denver, and 106 degrees Fahrenheit in Phoenix. Write a program that
// calculates and reports what the new average July high temperature would be for each of
// these cities if temperatures rise by 2 percent

#include <iostream>
using namespace std;

int main()
{
    double nycAvg = 85, denverAvg = 88, phoenixAvg = 106;

    cout << "These are the new temperature averages if they rose 2%:" << endl;
    cout << "NYC: " << nycAvg * 1.02 << endl;
    cout << "Denver: " << denverAvg * 1.02 << endl;
    cout << "Phoenix: " << phoenixAvg * 1.02 << endl;

    return 0;
}