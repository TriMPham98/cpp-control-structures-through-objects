// A bag of cookies holds 30 cookies. The calorie information
// on the bag claims that there are 10 servings in the bag and
// that a serving equals 300 calories. Write a program that asks
// the user to input how many cookies he or she actually ate
// and then reports how many total calories were consumed.

#include <iostream>

using namespace std;

int main()
{
    int cookiesPerBag = 30;
    int servingsPerBag = 10;
    int caloriesPerServing = 300;
    int userCookies, caloriesConsumed;

    cout << "This program reports how many calories were consumed." << endl;
    cout << "How many cookies did you eat?" << endl;
    cin >> userCookies;

    caloriesConsumed = userCookies * caloriesPerServing / 3;
    cout << "Calories consumed: " << caloriesConsumed << endl;
    return 0;
}