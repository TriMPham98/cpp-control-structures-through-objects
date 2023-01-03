// This program demonstrates three ways to use cin.get() to pause a program.

#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "This program has paused. Press Enter to continue." << endl;
    cin.get(ch);
    cout << "It has paused a second time. Press Enter again." << endl;
    ch = cin.get();
    cout << "It has paused a third time. Press Enter again." << endl;
    cin.get();
    cout << "Thank you!" << endl;

    return 0;
}