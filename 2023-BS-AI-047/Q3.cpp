// File: laiba_3rd_program.cpp
// Date: 02-05-2024
// Name: LAIBA FATIMA
// Registration No: 2023-BS-AI-O47
/* Question Statement :Write a function find(…) that accepts a one-dimensional integer array of size 10 as an 
argument to the function. Your program then finds the location and value of the largest and second-largest elements
 in a one-dimensional array. Display answers in main().*/

#include <iostream>
using namespace std;

void findLAIBA(int arr[], int LAIBAsize, int& LAIBAmax_index, int& LAIBAmax_value, int& LAIBAsecond_max_index, int& LAIBAsecond_max_value)
 {
    // Initialize max_index and max_value to the first element
    LAIBAmax_index = 0;
    LAIBAmax_value = arr[0];

    // Find the index and value of the largest element
    for (int i = 1; i < LAIBAsize; ++i) {
        if (arr[i] > LAIBAmax_value) {
            LAIBAmax_index = i;
            LAIBAmax_value = arr[i];
        }
    }

    // Initialize second_max_index and second_max_value to the second element
    LAIBAsecond_max_index = 1;
    LAIBAsecond_max_value = arr[1];

    // Find the index and value of the second-largest element
    for (int i = 0; i < LAIBAsize; ++i) {
        if (i == LAIBAmax_index) {
            // Skip the max_index
            continue;
        }
        if (arr[i] > LAIBAsecond_max_value) {
            LAIBAsecond_max_index = i;
            LAIBAsecond_max_value = arr[i];
        }
    }
}

int main() {
    int arr[10] = {12, 45, 78, 23, 56, 34, 67, 89, 90, 20};
    int max_index, max_value, second_max_index, second_max_value;

    // Call the find function
    findLAIBA(arr, 10, max_index, max_value, second_max_index, second_max_value);

    // Display results
    cout << "Largest element: " << max_value << " at index " << max_index << endl;
    cout << "Second largest element: " << second_max_value << " at index " << second_max_index << endl;

    return 0;
}
