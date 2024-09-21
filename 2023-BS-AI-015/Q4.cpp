//file: file eman.cpp
//date: 1-05-2024
//name: eman tahir
//reg no. 2023-bs-ai-015
//question statement:Write a function arrange(…) that accepts a one-dimensional integer array of size 10 as an argument to the function. The program then shifts negative numbers to the left and positive numbers to the right side of the array.
#include <iostream>
using namespace std;
int arrange(int eman[], int size) 
{
    int left = 0, right = size - 1;

    while (left <= right)
	 {
        if (eman[left] < 0 && eman[right] >= 0)
		 {
            int temp = eman[left];
            eman[left] = eman[right];
            eman[right] = temp;
            left++;
            right--;
        }
		 else
		  {
            if (eman[left] >= 0)
			 {
                left++;
            }
            if (eman [right] < 0) 
			{
                right--;
            }
        }
    }
}

int main() {
    int eman[10] = {3, -5, 1, 2, 7, 0, -15, 6, -4, -8};
    int size = 10;

    arrange(eman, size);

    cout << "Output: ";
    for (int i = 0; i < size; ++i) {
        cout << eman[i] << " ";
    }
    cout << endl;

    return 0;
}
