// This program successfully uses both cin >> and cin.get() for keyboard output.

#include <iostream>

using namespace std;

int main()
{
    char ch;
    int number;

    cout << "Enter a number: ";
    cin >> number;
    cin.ignore(); // Skip the newline character
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "Thank you!\n";

    return 0;
}