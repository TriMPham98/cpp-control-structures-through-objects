// The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
// Write a program that calculates how many widgets are stacked on a pallet,
// based on the total weight of the pallet. The program should ask the user
// how much the pallet weighs by itself and with the widgets stacked on it.
// It should then calculate and display the number of widgets stacked on the pallet.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double palletWeight, totalWeight, widgetWeight = 12.5, numberOfWidgets;

    cout << "Enter the weight of the pallet: ";
    cin >> palletWeight;
    cout << "Enter the total weight of the pallet with the widgets: ";
    cin >> totalWeight;

    numberOfWidgets = (totalWeight - palletWeight) / widgetWeight;

    cout << "The number of widgets on the pallet is " << numberOfWidgets << endl;

    return 0;
}