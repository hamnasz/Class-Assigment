// File: 4_array.cpp
// Date: 01-05-2024
// Name: Mishal Nadeem
// Registration No: 2023-BS-AI-020

//Write a function arrange(…) that accepts a one-dimensional integer array of size 10 as an argument to the function. The program then shifts negative numbers to the left and positive numbers to the right side of the array. 

#include <iostream>
using namespace std;

void arrange(int arr[], int size) {
    // Initialize two pointers: one for negative numbers and one for positive numbers
    int negPtr = 0;
    int posPtr = size - 1;

    // Iterate until the pointers meet
    while (negPtr < posPtr) {
        // Move the negative pointer to the right until a positive number is found
        while (arr[negPtr] < 0 && negPtr < posPtr) {
            negPtr++;
        }

        // Move the positive pointer to the left until a negative number is found
        while (arr[posPtr] >= 0 && negPtr < posPtr) {
            posPtr--;
        }

        // Swap the negative and positive numbers
        if (negPtr < posPtr) {
            swap(arr[negPtr], arr[posPtr]);
            negPtr++;
            posPtr--;
        }
    }
}

int main() {
    int mishal[10] = {3, -5, 1, 2, 7, 0, -15, 6, -4, -8};

    cout << "Array before arrangement:\n";
    for (int i = 0; i < 10; ++i) {
        cout << mishal[i] << " ";
    }
    cout << endl;

    // Call the arrange function
    arrange(mishal, 10);

    cout << "Array after arrangement:\n";
    for (int i = 0; i < 10; ++i) {
        cout << mishal[i] << " ";
    }
    cout << endl;

    return 0;
}
