#include <iostream>
using namespace std;
void arrange(int arr[], int size)
 {
    int left = 0;
    int right = size - 1;
    while (left < right)
	 {
        while (arr[left] < 0 && left < right) 
		{
            left++;
        }
        while (arr[right] >= 0 && left < right)
		 {
            right--;
        }
        if (left < right)
		 {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}
int main()
 {
    const int SIZE = 10;
    int arr[SIZE] = {3, -5, 1, 2, 7, 0, -15, 6, -4, -8};
    cout << "Original Array:" << endl;
    for (int i = 0; i < SIZE; ++i) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
    arrange(arr, SIZE);
    cout << "Array after arranging negative numbers to the left and positive numbers to the right:" << endl;
    for (int i = 0; i < SIZE; ++i)
	 {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
