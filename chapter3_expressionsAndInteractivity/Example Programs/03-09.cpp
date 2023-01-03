// This program uses a type cast to avoid integer division.

#include <iostream>
using namespace std;

int main()
{
    int books;       // Number of books to read
    int months;      // Number of months spent reading
    double perMonth; // Average number of books per month

    cout << "How many books do you plan to read?" << endl;
    cin >> books;
    cout << "How many months will it take to read them?" << endl;
    cin >> months;

    perMonth = static_cast<double>(books) / months;
    cout << "That is " << perMonth << " books per month." << endl;

    return 0;
}