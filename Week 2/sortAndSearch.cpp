// SortAndSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// function prototypes
void bubbleSort(int values[], int size);
int binarySearch(int values[], int size, int searchFor);
void loopArray(int values[], int size);

// function declarations
void bubbleSort(int values[], int size)
{
    bool swapMade = true;
    int numComparisons = size - 1;
    int swapNum1 = 0;
    int swapNum2 = 0;

    while (swapMade) 
    {
        swapNum1 = 0;
        swapNum2 = 0;
        swapMade = false;

        for (int i = 0; i < numComparisons - 1; i++)
        {
            if (values[i] > values[i+1])
            {
                swapNum1 = values[i];
                swapNum2 = values[i+1];

                values[i] = swapNum2;
                values[i+1] = swapNum1;

                swapMade = true;
            }
        }

        numComparisons--;
        loopArray(values, size);
       
    }
}

void loopArray(int values[], int size)
{
    string Msg = "";

    for (int i = 0; i < size; i++)
    {
        cout << values[i] << " ";
    }

    cout << "\n";
}

int binarySearch(int values[], int size, int searchFor)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int pos = (left + right) / 2;

        if (values[pos] == searchFor)
        {
            return pos;
        } 

        if (values[pos] < searchFor)
        {
            left = pos + 1;
        }
        else
        {
            right = pos - 1;
        }
    }

    return -1; // Number not found
}

int main()
{
    int values[16];

    values[0] = 14;
    values[1] = 17;
    values[2] = 28;
    values[3] = 36;
    values[4] = 56;
    values[5] = 64;
    values[6] = 72;
    values[7] = 85;
    values[8] = 89;
    values[9] = 94;
    values[10] = 99;
    values[11] = 114;
    values[12] = 152;
    values[13] = 185;
    values[14] = 199;
    values[15] = 304;

    cout << binarySearch(values, 16, 99);
}
