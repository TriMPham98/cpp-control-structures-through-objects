// This program determines the size of integers, long, integers, and long doubles.
#include <iostream>
using namespace std;

int main()
{
    long double apple;

    cout << "The size of an integer is " << sizeof(int) << " bytes." << endl;
    cout << "The size of a long integer is " << sizeof(long) << " bytes. " << endl;
    cout << "An apple can be eaten in " << sizeof(apple) << " bytes." << endl;

    return 0;
}