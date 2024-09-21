//ayesha imran
//2023-bsai-011
//oops

//Write a function find(…) that accepts a one-dimensional integer array of size 10 as an argument to the
//function. Your program then finds the location and value of the largest and second-largest elements in a
//one-dimensional array. Display answers in main()

#include <iostream>
using namespace std;
void ayesha(int arr[], int size, int &maxVal, int &maxIndex, int &secondMaxVal, int &secondMaxIndex) 
{
    maxVal = arr[0];
    maxIndex = 0;
    secondMaxVal = arr[1];
    secondMaxIndex = 1;

    for (int i = 1; i < size; ++i) 
	{
        if (arr[i] > maxVal) 
		{
            secondMaxVal = maxVal;
            secondMaxIndex = maxIndex;
            maxVal = arr[i];
            maxIndex = i;
        } else if (arr[i] > secondMaxVal) 
		{
            secondMaxVal = arr[i];
            secondMaxIndex = i;
        }
    }
}

int main() 
{
    int arr[10];
    int maxVal, maxIndex, secondMaxVal, secondMaxIndex;

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; ++i) 
	{
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    ayesha(arr, 10, maxVal, maxIndex, secondMaxVal, secondMaxIndex);

    cout << "Largest element is " << maxVal << " at index " << maxIndex << endl;
    cout << "Second largest element is " << secondMaxVal << " at index " << secondMaxIndex << endl;

    return 0;
}

