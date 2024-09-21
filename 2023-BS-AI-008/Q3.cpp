//1-MAY-2024
//Mohammad Mukedas
//2023-BSAI-008
//OOP ASSIGNMENT
//Write a function find(…) that accepts a one-dimensional integer array of size 10 as an argument to the
//function. Your program then finds the location and value of the largest and second-largest elements in a
//one-dimensional array.
// Display answers in main().
#include <iostream>
using namespace std;

void find(int arr[10]) {
    int max = arr[0];
    int max_index = 0;
    int second_max = arr[0];
    int second_max_index = 0;

    for (int i = 1; i <= 9; i++) {
        if (arr[i] > max) {
            second_max = max;
            second_max_index = max_index;
            max = arr[i];
            max_index = i;
        } else if (arr[i] > second_max) {
            second_max = arr[i];
            second_max_index = i;
        }
    }

    cout << "Largest Element: " << max << " at index " << max_index << endl;
    cout << "Second Largest Element: " << second_max << " at index " << second_max_index << endl;
}

int main() {
    int arr[10];

    cout << "Enter 10 integer values:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    find(arr);

    return 0;
}
