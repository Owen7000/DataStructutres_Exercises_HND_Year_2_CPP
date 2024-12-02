// Exercise 5
// Take the “menu program you wrote in Q2 and break it out into a series of calls to functions for each of the menu items. Add the running sum, 99 bottles and password prompt as programs that can be run from this menu

#include <iostream>
#include <string>
using namespace std;

void bottlesOfBeer()
{
    int bottles = 99;


    while (bottles > 0)
    {
        cout << bottles << " bottles of beer on the wall, " << bottles << " of beer. Take one down pass it around " << bottles - 1 << " bottles of beer on the wall!\n";
        bottles--;
    }
}

void runningTotal()
{
    int enteredNum = -1;
    int runningTotal = 0;

    while (enteredNum != 0)
    {
        cout << "Please enter a number: ";
        cin >> enteredNum;

        runningTotal += enteredNum;
    }

    cout << "The total of all inputs is: " << runningTotal << "\n";
}

bool getPassword()
{
    string expectedPassword = "Password";
    string enteredPassword = "";

    cout << "Enter your password: ";
    cin >> enteredPassword;

    if (enteredPassword == expectedPassword)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void passwordPrompt()
{
    int numAttempts = 0;
    int maxNumAttempts = 3;

    while (numAttempts < maxNumAttempts)
    {
        if (getPassword())
        {
            cout << "You entered the correct password!\n";
            exit(1);
        }
        else
        {
            cout << "You entered the wrong password! Try again.\n";
            numAttempts++;
        }
    }

    cout << "You ran out of password attempts.\n";
}

int main()
{
    int menuOption = 0;

    while (menuOption != 4)
    {
        cout << "Your menu options are:\n1 - Bottles of beer\n2 - Running total\n3 - Password prompt\n4 - Exit";

        cin >> menuOption;

        if (menuOption == 1)
        {
            bottlesOfBeer();
        }
        else if (menuOption == 2)
        {
            runningTotal();
        }
        else if (menuOption == 3)
        {
            passwordPrompt();
        }
        else if (menuOption == 4)
        {
            cout << "Goodbye!\n";
        }
        else
        {
            cout << "Please enter an expected menu option.";
        }
    }
}