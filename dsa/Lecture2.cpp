#include <iostream>
using namespace std;

int main()
{
    // Date : 23rd August 2024 (DSA Lecture 2)
    // Q: write an algo to print the greatest number out of 2 given numbers
    // int a, b;
    // cout << "Type 2 Number : ";
    // cin >> a >> b;
    // if (a > b)
    // {
    //     cout << a << " is greater than " << b;
    // }
    // else
    // {
    //     cout << b << " is greater than " << a;
    // }

    // Q : check if divisible by 2
    // for (int i = 0; i < 21; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // Algorithsm : finite number of steps to solve a particular problem. Number of steps in the algo and the time of execution of each step should be finite.

    // Two types of Analysis for Time Complexity :
    // 1. Posterior Analysis : hardware dependant
    // 2. Prior Analysis (preferred) : independant of hardware (same hardware is assumed)

    // Space Complexity : total amount of memory required by an algo for its complete execution.

    // Write a program to arrange elements of an array in ascending order (selection sort)
    int arr[5] = {0};
    cout << "Type numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // 1. Asymptotic Notations for TC and SC
    //

    return 0;
}