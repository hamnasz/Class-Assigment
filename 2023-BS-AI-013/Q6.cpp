//1-MAY-2024
//SEEMAL MUSTAFA
//2023-BSAI-013
//OOP ASSIGNMENT

//Write a function find(…) that accepts a one-dimensional integer array of size 10 as an argument to the
//function. Your program then finds the location and value of the largest and second-largest elements in a
//one-dimensional array.
// Display answers in main().

#include <iostream>
using namespace std;

void find(int seemal[], int size)
 {
    int max = INT_MIN, secondMax = INT_MIN;
    int maxIndex = -1, secondMaxIndex = -1;

    for (int i = 0; i < size; ++i)
	 {
        if (seemal[i] > max)
		 {
            secondMax = max;
            secondMaxIndex = maxIndex;
            max = seemal[i];
            maxIndex = i;
        } 
		else if (seemal[i] > secondMax) 
		{
            secondMax = seemal[i];
            secondMaxIndex = i;
        }
    }

    cout << "Largest element: " << max << " at index " << maxIndex << endl;
    cout << "Second largest element: " << secondMax << " at index " << secondMaxIndex << endl;
}

int main() {
    int seemal[10] = {12, 45, 7, 23, 56, 89, 32, 67, 43, 90};
    find(seemal, 10);

    return 0;
}
