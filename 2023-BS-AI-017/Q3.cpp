/* File: Program no 3.cpp
Date: 01-05-2024
Name: Humna Imran
Registration No: 2023-BS-AI-O17

Question Statement :
Write a function find
⭐ that accepts a one-dimensional integer array of size
10 as an argument to the function.

Your program then finds the
⭐ location
⭐ Value of the largest and second-largest elements
in a one-dimensional array.

Display answers */

#include <iostream>
using namespace std;
void find(int arr[], int size)
{
    // Initialize variables to store the largest and second-largest elements and their indices
    int max = arr[0];
    int secondMax = arr[0];
    int maxIndex = 0;
    int secondMaxIndex = 0;

    // Find the largest element and its index
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            secondMaxIndex = maxIndex;
            max = arr[i];
            maxIndex = i;
        }
        else if (arr[i] > secondMax)
        {
            secondMax = arr[i];
            secondMaxIndex = i;
        }
    }

    // Display the results
    cout << "Largest Element: " << max << " at index " << maxIndex << endl;
    cout << "Second Largest Element: " << secondMax << " at index " << secondMaxIndex << endl;
}

int main()
{
    int Hamna[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    find(Hamna, 10);

    return 0;
}