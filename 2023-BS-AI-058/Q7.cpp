#include <iostream>
using namespace std;
void find(int arr[], int size, int& max_value, int& max_index, int& second_max_value, int& second_max_index)
 {
    max_value = arr[0];
    max_index = 0;
    second_max_value = arr[0];
    second_max_index = 0;
    for (int i = 1; i < size; ++i) 
	{
        if (arr[i] > max_value) 
		{
            second_max_value = max_value;
            second_max_index = max_index;
            max_value = arr[i];
            max_index = i;
        } 
		else if (arr[i] > second_max_value && arr[i] != max_value) 
		{
            second_max_value = arr[i];
            second_max_index = i;
        }
    }
}

int main()
 {
    const int SIZE = 10;
    int arr[SIZE] = {5, 9, 3, 7, 8, 12, 6, 10, 4, 11};
    int max_value, max_index, second_max_value, second_max_index;
    find(arr, SIZE, max_value, max_index, second_max_value, second_max_index);
    cout << "Largest element: " << max_value << " at index " << max_index << endl;
    cout << "Second largest element: " << second_max_value << " at index " << second_max_index << endl;
    return 0;
}
