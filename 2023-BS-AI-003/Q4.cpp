#include <iostream>
using namespace std;
void arrange(int arr[10]) {
    int j = 0; // index for negative numbers
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
}

int main() {
    int arr[10] = {1, -2, -3, 4, 5, 6, -7, 8, 9, 10};
    arrange(arr);
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}