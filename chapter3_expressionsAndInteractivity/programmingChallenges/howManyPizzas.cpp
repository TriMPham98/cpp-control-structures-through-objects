// Modify the program you wrote in Programming Challenge 20 (Pizza Pi)
// so it reports the number of pizzas you need to buy for a party if
// each person attending is expected to eat an average of four slices.
// The program should ask the user for the number of people who will be
// at the party, and for the diameter of the pizzas to be ordered. It
// should then calculate and display the number of pizzas to purchase.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // A) Ask the user for the number of people attending the party.
    int numPeople;
    cout << "Enter the number of people attending the party: ";
    cin >> numPeople;

    // B) Ask the user for the diameter of the pizzas to be ordered.
    double pizzaDiameter;
    cout << "Enter the diameter of the pizzas to be ordered in inches: ";
    cin >> pizzaDiameter;

    // C) Calculate the number of slices per pizza.
    const double PI = 3.14159;
    double radius = pizzaDiameter / 2;
    double area = PI * pow(radius, 2);
    int numSlicesPerPizza = area / 14.125;

    // D) Calculate the total number of slices needed for the party.
    int numSlicesNeeded = numPeople * 4;

    // E) Calculate the number of pizzas needed for the party.
    int numPizzas = ceil(numSlicesNeeded / (double)numSlicesPerPizza);

    // F) Display a message telling the number of pizzas to purchase.
    cout << "You need to purchase " << numPizzas << " pizzas for the party." << endl;

    return 0;
}