// Exercise 1
// Write a program that prints out the entire lyrics to a full rendition of “99 Bottles of Beer”

#include <iostream>
using namespace std;

int main()
{
    int bottles;

    bottles = 99;

    while (bottles > 0)
    {
        cout << bottles << " bottles of beer on the wall, " << bottles << " of beer. Take one down pass it around " << bottles - 1 << " bottles of beer on the wall!\n";

        bottles--;
    }
}