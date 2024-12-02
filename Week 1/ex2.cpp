// Exercise 2
// Write a menu program that lets the user select from a list of options, and If the input is not one of the options, reprint the list

#include <iostream>
using namespace std;

int main()
{
    int menuOption;

    menuOption = 0;

    while (menuOption != 3)
    {
        cout << "Your menu options are:\n1 - Hello\n2 - World\n3 - Exit\n";

        cin >> menuOption;

        if (menuOption == 1)
        {
            cout << "Hello!\n";
        }
        else if (menuOption == 2)
        {
            cout << "World!\n";
        }
        else if (menuOption == 3)
        {
            cout << "Goodbye!\n";
        }
        else
        {
            cout << "Please enter an expected menu option.";
        }
    }
}