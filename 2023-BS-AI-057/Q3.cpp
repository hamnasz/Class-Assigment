// File: problem 3 assignment no 3 oop.cpp
// Date: 01-05-2024
// Name: Ayesha Imran
// Registration No: 2023-BS-AI-057
/*Write a function find(…) that accepts a one-dimensional integer array of size 10 as an argument to the function.
 Your program then finds the location and value of the largest and second-largest elements in a one-dimensional array.
  Display answers in main().*/
#include <iostream>
using namespace std;
void find(const int arr[], int size, int& maxIndex, int& maxValue, int& secondMaxIndex, int& secondMaxValue) {
    maxIndex = 0;
    maxValue = arr[0];
    secondMaxIndex = -1;
    secondMaxValue = INT_MIN;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxValue) {
            secondMaxIndex = maxIndex;
            secondMaxValue = maxValue;
            maxIndex = i;
            maxValue = arr[i];
        } else if (arr[i] > secondMaxValue) {
            secondMaxIndex = i;
            secondMaxValue = arr[i];
        }
    }
}

int main() {
    const int size = 10;
    int arr[size] = {12, 45, 78, 34, 98, 23, 56, 89, 67, 43};
    int maxIndex, maxValue, secondMaxIndex, secondMaxValue;

    find(arr, size, maxIndex, maxValue, secondMaxIndex, secondMaxValue);

    cout << "Largest element: " << maxValue << " at index " << maxIndex << endl;
    cout << "Second largest element: " << secondMaxValue << " at index " << secondMaxIndex << endl;

    return 0;
}
