// This program demonstrates the nested if statement.

#include <iostream>

using namespace std;

int main()
{
    char employed,  // Currently employed, Y or N
        recentGrad; // Recent graduate, Y or N

    // Is the user employed and a recent graduate?
    cout << "Answer the following questions with either Y for Yes or N for No." << endl;
    cout << "Are you employed? ";
    cin >> employed;
    cout << "Have you graduated from college in the past two years? ";
    cin >> recentGrad;

    // Determine the user's loan qualifications.
    if (employed == 'Y')
    {
        if (recentGrad == 'Y')
        {
            cout << "You qualify for the special interest rate." << endl;
        }
        else // Not a recent grad, but employed
        {
            cout << "You must have graduated from college in the past two years to qualify." << endl;
        }
    }
    else
    {
        cout << "You must be employed to qualify." << endl;
    }

    return 0;
}