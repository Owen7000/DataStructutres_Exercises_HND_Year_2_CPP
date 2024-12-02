// Exercise 4
// Write a password prompt that gives only a certain number of password entry attempts – so that the user cannot easily use a password cracker

#include <iostream>
#include <string>
using namespace std;

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

int main()
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