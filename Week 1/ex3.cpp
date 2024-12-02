// Exercise 3
// Write a program that computes a running sum of inputs from the user, terminating when the user gives an input value of 0

#include <iostream>
using namespace std;

int main()
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