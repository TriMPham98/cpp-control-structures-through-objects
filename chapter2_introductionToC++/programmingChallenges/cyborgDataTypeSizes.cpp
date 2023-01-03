// You have been given a job as a programmer on a Cyborg supercomputer.
// In order to accomplish some calculations, you need to know how many
// bytes the following data types uses: char, int, float, and double.
// You do not have any technical documentation, so you can't look this
// information up. Write a C++ program that will determine the amount
// of memory used by these types and display the information on the screen.

#include <iostream>
using namespace std;

int main()
{
    char char1;
    int int1;
    float float1;
    double double1;

    cout << "The size of a char data type is " << sizeof(char1) << " bytes" << endl;
    cout << "The size of an int data type is " << sizeof(int1) << " bytes" << endl;
    cout << "The size of a float data type is " << sizeof(float1) << " bytes" << endl;
    cout << "The size of a double data type is " << sizeof(double1) << " bytes" << endl;

    return 0;
}