//ayesha imran 
//2023-bsai-011
//oops

//Write a function arrange(…) that accepts a one-dimensional integer array of size 10 as an argument to the
//function. The program then shifts negative numbers to the left and positive numbers to the right side of
//the array. 

#include <iostream>
using namespace std;
void ayesha(int arr[]) 
{
    int left = 0, right = 9;
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
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; ++i) 
	{
      cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
   cout << endl;

    ayesha(arr);

    cout << "Arranged array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
   cout <<endl;

    return 0;
}

