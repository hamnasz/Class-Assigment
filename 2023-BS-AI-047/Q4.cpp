// File: laiba_4th_program.cpp
// Date: 02-05-2024
// Name: LAIBA FATIMA
// Registration No: 2023-BS-AI-O47
/* Question Statement :Write a function arrange(…) that accepts a one-dimensional integer array of size 10 as an argument to the 
function. The program then shifts negative numbers to the left and positive numbers to the right side of 
the array. 
For example,
Array is
3 -5 1 2 7 0 -15 6 -4 -8
Output (After Deletion):
-5 -15 -4 -8 3 1 2 7 0 6  
*/

#include <iostream>
using namespace std;
void arrangeLAIBA_IS_THE_BEST(int arr[], int size)
 {
    int left = 0, right = size - 1;

    while (left <= right) 
    {
        // Move left pointer to find the first positive number from left
        while (left < size && arr[left] < 0) 
        {
            left++;
        }
        // Move right pointer to find the first negative number from right
        while (right >= 0 && arr[right] >= 0) 
        {
            right--;
        }
        // Swap positive and negative numbers if left pointer is less than right pointer
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[10] = {3, -5, 1, 2, 7, 0, -15, 6, -4, -8};

    // Display original array
    cout << "Original array:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the arrange function
    arrangeLAIBA_IS_THE_BEST(arr, 10);

    // Display rearranged array
    cout << "\nRearranged array:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
