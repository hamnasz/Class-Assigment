//1-MAY-2024
//SEEMAL MUSTAFA
//2023-BSAI-013
//OOP ASSIGNMENT

//Write a function arrange(…) that accepts a one-dimensional integer array of size 10 as an argument to the
//function.
// The program then shifts negative numbers to the left and positive numbers to the right side of
//the array.
//For example,
//Array is
//3 -5 1 2 7 0 -15 6 -4 -8
//Output (After Deletion):
//-5 -15 -4 -8 3 1 2 7 0 6

#include <iostream>
using namespace std;

void arrange(int seemal[], int size) 
{
    int left = 0, right = size - 1;

    while (left <= right)
	 {
        if (seemal[left] < 0 && seemal[right] >= 0)
		 {
            int temp = seemal[left];
            seemal[left] = seemal[right];
            seemal[right] = temp;
            left++;
            right--;
        }
		 else
		  {
            if (seemal[left] >= 0)
			 {
                left++;
            }
            if (seemal [right] < 0) 
			{
                right--;
            }
        }
    }
}

int main() {
    int seemal[10] = {3, -5, 0, 2, 7, 4, -15, 6, -4, -8};
    int size = 10;

    arrange(seemal, size);

    cout << "Output: ";
    for (int i = 0; i < size; ++i) {
        cout << seemal[i] << " ";
    }
    cout << endl;

    return 0;
}
