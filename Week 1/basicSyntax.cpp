// basicSyntax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /* 
    // First program
    int myNumber; // Create a variable with the type int(Integer)

    cout << "Please enter a number: "; // Output text to terminal
    cin >> myNumber; // Take the console input and put it in myNumber

    cout << "You entered: " << myNumber << "\n"; // Output text to terminal. << to add extra things to the string
    */


    // Second program
    int num;
    cout << "Enter a number: ";

    cin >> num;

    if (num < 0) 
    {
        cout << "You have entered a negative number\n";
    }
    else if (num == 0)
    {
        cout << "You have enterd zero\n";
    }
    else
    {
        cout << "You entered a positive number\n";
    }
}