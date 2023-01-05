// Write a program that can be used as a math tutor for a young student.
// The program should display two random numbers to be added, such as:
// 247
// 129
// ----
// The program should then pause while the student works on the problem.
// When the student is ready to check the answer, he or she can press a key
// and the program will display the correct solution:
// 247
// 129
// ----
// 376

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate two random numbers
    int num1 = rand() % 1000;
    int num2 = rand() % 1000;

    // Display the problem to the student
    cout << num1 << endl;
    cout << num2 << endl;
    cout << "----" << endl;

    // Wait for the student to press a key before displaying the answer
    cin.get();

    // Display the answer
    cout << "\nCorrect answer:" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << "----" << endl;
    cout << num1 + num2 << endl;

    return 0;
}
