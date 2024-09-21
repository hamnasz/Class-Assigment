//1-MAY-2024
//Mohammad Mukedas
//2023-BSAI-008
//OOP ASSIGNMENT
//Write a function arrange(…) that accepts a one-dimensional integer array of size 10 as an argument to the
//function.
// The program then shifts negative numbers to the left and positive numbers to the right side of
//the array.
//For example,
//Array is
//3 -5 1 2 7 0 -15 6 -4 -8
//Output (After Deletion):
//-5 -15 -4 -8 3 1 2 7 0 6#include <iostream>
using namespace std;

void arrange(int arr[]) {
    int left = 0, right = 9; 

    while (left <= right) {
        if (arr[left] < 0) {
            left++;
        } else if (arr[right] >= 0) {
            right--;
        } else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[10];

    cout << "Enter 10 integers separated by spaces: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arrange(arr);

    cout << "Arranged array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
