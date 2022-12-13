// The East Coast sales division of a company generates 58% of total sales.
// Based on that percentage, write a program that will predict how much the East Coast
// division will generate if the company has $8.6 million in sales this year.

#include <iostream>
using namespace std;

int main()
{
    double eastCoastPercentage = 0.58;
    int companySales = 8600000;

    cout << "The East Coast sales division will generate $"
         << eastCoastPercentage * companySales << " in revenue." << endl;
}