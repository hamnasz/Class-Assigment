//AYESHA IMRAN
//2023-BSAI-061
//PROGRAM 3
#include <iostream>
using namespace std;

void find(int ayesha[], int size)
 {
    int max = INT_MIN, secondMax = INT_MIN;
    int maxIndex = -1, secondMaxIndex = -1;

    for (int i = 0; i < size; ++i)
	 {
        if (ayesha[i] > max)
		 {
            secondMax = max;
            secondMaxIndex = maxIndex;
            max = ayesha[i];
            maxIndex = i;
        } 
		else if (ayesha[i] > secondMax) 
		{
            secondMax = ayesha[i];
            secondMaxIndex = i;
        }
    }

    cout << "Largest element: " << max << " at index " << maxIndex << endl;
    cout << "Second largest element: " << secondMax << " at index " << secondMaxIndex << endl;
}

int main() {
    int ayesha[10] = {12, 46, 7, 23, 56, 85, 32, 67, 43, 120};
    find(ayesha, 10);

    return 0;
}