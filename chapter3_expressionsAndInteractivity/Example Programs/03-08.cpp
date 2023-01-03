// This program can be used to see how you system handles
// floating point overflow and underflow.

#include <iostream>
using namespace std;

int main()
{
    float test;

    test = 2.0e38 * 1000; // Overflow test
    cout << "Overflow output: " << test << endl;
    test = 2.0e-38 / 2.0e38; // Underflow test
    cout << "Underflow output: " << test << endl;

    return 0;
}