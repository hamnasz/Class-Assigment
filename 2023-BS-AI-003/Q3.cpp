#include <iostream>
using namespace std;

void find(int arr[10]) {
    int max = arr[0];
    int secondMax = arr[0];
    int maxIndex = 0;
    int secondMaxIndex = 0;

    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }

    cout << "Largest element: " << max <<endl;
    cout << "Second largest element: " << secondMax <<endl;
}

int main() {
    int arr[10] = {1, -2, -3, 4, 5, 6, -7, 8, 9, 10};
    find(arr);
}