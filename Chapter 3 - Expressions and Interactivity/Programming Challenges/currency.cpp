// Write a program that will convert U.S. dollar amounts to Japanese yen and to
// euros, storing the conversion factors in the constants YEN_PER_DOLLAR and
// EUROS_PER_DOLLAR. To get the most up-to-date exchange rates, search the Internet'
// using the term "currency exchange rate". If you cannot find the most recent exchange
// rates, use the following:
// 1 Dollar = 98.93 Yen
// 1 Dollar = 0.74 Euros

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double YEN_PER_DOLLAR = 130.19;
    const double EUROS_PER_DOLLAR = 0.94;

    double userUSD;

    cout << "This program converts USD to Yen and Euros." << endl;
    cout << "Enter the USD amount: $";
    cin >> userUSD;

    cout << fixed << setprecision(2);
    cout << "$" << userUSD << " in Yen is: ¥" << userUSD * YEN_PER_DOLLAR << endl;
    cout << "$" << userUSD << " in Euro is: €" << userUSD * EUROS_PER_DOLLAR << endl;

    return 0;
}