//2023-bs-ai-021
//yumna irfan
// Date: 02-05-2024
//find function
#include <iostream>
using namespace std;
void find(int arr[], int size, int &max_value, int &max_index, int &second_max_value, int &second_max_index) 
{
    max_value = arr[0];
    max_index = 0;
    second_max_value = arr[0];
    second_max_index = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max_value) {
            second_max_value = max_value;
            second_max_index = max_index;
            max_value = arr[i];
            max_index = i;
        } else if (arr[i] > second_max_value) {
            second_max_value = arr[i];
            second_max_index = i;
        }
    }
}
int main() {
    int arr[10] = {5, 10, 3, 8, 15, 7, 9, 12, 2, 6};
    int max_value, max_index, second_max_value, second_max_index;
    find(arr, 10, max_value, max_index, second_max_value, second_max_index);
    cout << "Largest element is " << max_index << " with value " << max_value << endl;
    cout << "2nd largest element is " << second_max_index << " with value " << second_max_value <<endl;
    return 0;
}