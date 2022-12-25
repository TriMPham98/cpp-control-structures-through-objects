// A cookie recipe calls for the following ingredients:

// - 1.5 cups of sugar
// - 1 cup of butter
// - 2.75 cups of flour

// The recipe produces 48 cookies with this amount of ingredients.
// Write a program that asks the user how many cookies he or she
// wants to make, then displays the number of cups of each
// ingredient needed for the specified number of cookies.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double cupsSugar48Cookies = 1.5;
    double cupsButter48Cookies = 1;
    double cupsFlour48Cookies = 2.75;
    int userNumCookies;

    cout << "This program calculates the amount of ingredients required for the user's desired cookie count." << endl;
    cout << "How many cookies do you want to bake?" << endl;
    cin >> userNumCookies;

    cout << fixed << setprecision(3);
    cout << "You will need " << (cupsSugar48Cookies * (userNumCookies / 48.0))
         << " cups of sugar." << endl;

    cout << "You will need " << (cupsButter48Cookies * (userNumCookies / 48.0))
         << " cups of butter." << endl;

    cout << "You will need " << (cupsFlour48Cookies * (userNumCookies / 48.0))
         << " cups of flour." << endl;

    return 0;
}