//2023-bs-ai-021
//yumna irfan
// Date: 02-05-2024
//shifting numbers
#include <iostream>
using namespace std;
void arrange(int arr[], int size) {
    int left = 0;
    int right = size - 1;
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
    int arr[10] = {3, -5, 1, 2, 7, 0, -15, 6, -4, -8};
    cout << "Array before arrangement:" <<endl;
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] <<endl;
    }
    arrange(arr, 10);
    cout << "\nArray after arrangement:" <<endl;
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] <<endl;
    }
    return 0;
}