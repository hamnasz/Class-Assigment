// File: problem 4 assignment no 3 oop.cpp
// Date: 01-05-2024
// Name: Ayesha Imran
// Registration No: 2023-BS-AI-057
/*Write a function arrange(…) that accepts a one-dimensional integer array of size 10 as an argument to the function. The program then shifts negative numbers to the left and positive numbers to the right side of the array.
For example,
Array is
3
-5
1
2
7
0
-15
6
-4
-8
Output (After Deletion):
-5
-15
-4
-8
3
1
2
7
0
6*/

#include <iostream>
using namespace std;
void shiftArray(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left <= right) {
        if (arr[left] < 0) {
            left++;
        } else if (arr[right] >= 0) {
            right--;
        } else {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    const int size = 10;
    int arr[size] = {3, -5, 1, 2, 7, 0, -15, 6, -4, -8};

    cout << "Array before shifting:" <<endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] <<endl;
    }

    shiftArray(arr, size);

    cout << "\nArray after shifting:" <<endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] <<endl;
    }

    return 0;
}
