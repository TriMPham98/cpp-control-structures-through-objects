// A movie theater only keeps a percentage of the revenue earned
// from ticket sales. The remainder goes to the movie distributor.
// Write a program that calculates a theater's gross and net box office
// profit for a night. The program should ask for the name of the movie,
// and how many adult and child tickets were sold. (The price of
// an adult ticket is $10.00 and a child's ticket is $6.00.) It
// should display a report similar to:

// Movie Name: "Wheels of Fury"
// Adult Tickets Sold: 382
// Child Tickets Sold: 127
// Gross Box Office Profit: $4,582.00
// Net Box Office Profit: $916.40
// Amount Paid to Distributor: $3,665.60

// Assume the theater keeps 20 percent of the gross box office profit.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double ADULT_TIX_PRICE = 10.00;
    const double CHILD_TIX_PRICE = 6.00;

    string movieName;
    int adultTix, childTix;

    cout << "This program shows the financial performance of a theater." << endl;
    cout << "What is the movie name?" << endl;
    getline(cin, movieName);
    cout << "How many adult tickets were sold? ";
    cin >> adultTix;
    cout << "How many child tickets were sold? ";
    cin >> childTix;
}