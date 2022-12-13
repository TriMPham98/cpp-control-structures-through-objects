// To gee the average of a series of va lues, you add the values up then divide the sum by
// the number of values.
// Write a program that stores the following values in five different variables:
// 28, 32, 37, 24, and 33.
// The program should first calculate the sum of these five variables and store the result
// in a separate variable named sum.
// Then, the program should divide the sum variable by 5 to get the average.
// Display the average on the screen.

#include <iostream>
using namespace std;

int main()
{
    double a = 28, b = 32, c = 37, d = 24, e = 33;
    double sum = a + b + c + d + e;
    double average = sum / 5;

    cout << "The sum of five numbers is " << sum << endl;
    cout << "The average of five numbers is " << average << endl;

    return 0;
}