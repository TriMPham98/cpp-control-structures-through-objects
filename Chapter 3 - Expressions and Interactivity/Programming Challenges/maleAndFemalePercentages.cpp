// Write a program that asks for the user for the number of
// males and the number of females registered in a class.
// The program should display the percentage of males and
// females in the class.

// Hint: Suppose there are 8 males and 12 females in a class.
// There are 20 students in the class. The percentage of males
// can be calculated as 8 / 20 = 0.4, or 40 percent. The
// percentage of females can be calculated as 12 / 20 = 0.6,
// or 60 percent.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numMales, numFemales, totalRegistered;

    cout << "This program calculates and displays the percentage of males and females in the class." << endl;
    cout << "How many males registered for this class? " << endl;
    cin >> numMales;
    cout << "How many females registered for this class?" << endl;
    cin >> numFemales;

    totalRegistered = numMales + numFemales;

    cout << "The percentage of males who registered in the class of "
         << totalRegistered << " is " << static_cast<double>(numMales) / totalRegistered * 100 << "%." << endl;
    cout << "The percentage of females who registered in the class of "
         << totalRegistered << " is " << static_cast<double>(numFemales) / totalRegistered * 100 << "%." << endl;

    return 0;
}