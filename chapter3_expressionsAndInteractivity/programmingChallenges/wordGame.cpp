// Write a program that plays a word game with the user. The program should ask the
// user to enter the following:
// - His or her name
// - His or her age
// - The name of a city
// - The name of a college
// - A profession
// - A type of animal
// - A pet's name

// After the user has entered these items, the program should display the following story,
// inserting the user's input into the appropriate locations.

// There once was a person named [NAME] who lived in a [CITY]. At the age of [AGE],
// [NAME] went to college at [COLLEGE]. [NAME] graduated and went to work as a [PROFESSION].
// Then, [NAME] adopted a(n) [ANIMAL] named [PETNAME]. They both lived happily ever after!

#include <iostream>

using namespace std;

int main()
{
    string name, city, college, profession, animal, petName;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the name of a city: ";
    cin.ignore();
    getline(cin, city);
    cout << "Enter the name of a college: ";
    getline(cin, college);
    cout << "Enter a profession: ";
    getline(cin, profession);
    cout << "Enter a type of animal: ";
    getline(cin, animal);
    cout << "Enter a pet's name: ";
    getline(cin, petName);
}
