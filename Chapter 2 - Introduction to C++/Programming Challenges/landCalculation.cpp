// One acre of land is equivalent to 43,560 square feet. Write a program that calculates
// the number of acres in a tract of land with 391,876 square feet.

#include <iostream>
using namespace std;

int main()
{
    double sqFtPerAcre = 43560;
    double landTractInSqFt = 391876;

    cout << "There are " << landTractInSqFt / sqFtPerAcre << " acres in the land tract of 391,876 sq. ft." << endl;

    return 0;
}
