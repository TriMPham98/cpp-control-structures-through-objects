// A soft drink company recently surveyed 16,500 of its customers and found that
// approximately 15 percent of those surveyed purchase one or more energy drinks per week.
// Of those customers who purchase energy drinks, approximately 58 percent of them prefer
// citrus-flavored energy drinks. Write a program that displays the following:
// - The approximate number of customers in the survey who purchase one or more
// energy drinks per week.
// - The approximate number of customers in the survey who prefer citrus-flavored
// energy drinks.

#include <iostream>
using namespace std;

int main()
{
    int numCustomers = 16500;
    double energyDrinkPurchasers = 0.15;
    double citrusEnergyEnjoyers = 0.58;

    cout << "The number of customers who purchase one or more energy drinks per week: " << numCustomers * energyDrinkPurchasers << endl;
    cout << "The number of customers who prefer citrus-flavored energy drinks: " << numCustomers * energyDrinkPurchasers * citrusEnergyEnjoyers << endl;

    return 0;
}