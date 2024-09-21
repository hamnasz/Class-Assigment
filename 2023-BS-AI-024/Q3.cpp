
//taibah shahbaz
//2023-BSAI-024
//OOP ASSIGNMENT

//Write a function find(…) that accepts a one-dimensional integer array of size 10 as an argument to the
//function. Your program then finds the location and value of the largest and second-largest elements in a
//one-dimensional array.
// Display answers in main().

#include <iostream>
using namespace std;

void find(int taibah[], int size)
 {
    int max = INT_MIN, secondMax = INT_MIN;
    int maxIndex = -1, secondMaxIndex = -1;

    for (int i = 0; i < size; ++i)
	 {
        if (taibah[i] > max)
		 {
            secondMax = max;
            secondMaxIndex = maxIndex;
            max = taibah[i];
            maxIndex = i;
        } 
		else if (taibah[i] > secondMax) 
		{
            secondMax = taibah[i];
            secondMaxIndex = i;
        }
    }

    cout << "Largest element: " << max << " at index " << maxIndex << endl;
    cout << "Second largest element: " << secondMax << " at index " << secondMaxIndex << endl;
}

int main() {
    int taibah[10] = {12, 46, 7, 23, 56, 85, 32, 67, 43, 120};
    find(taibah, 10);

    return 0;
}