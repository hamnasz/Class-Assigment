//AYESHA IMRAN
//2023-BSAI-061
//PROGRAM 4
#include <iostream>
using namespace std;

void arrange(int ayesha[], int size) 
{
    int left = 0, right = size - 1;

    while (left <= right)
	 {
        if (ayesha[left] < 0 && ayesha[right] >= 0)
		 {
            int temp = ayesha[left];
            ayesha[left] = ayesha[right];
            ayesha[right] = temp;
            left++;
            right--;
        }
		 else
		  {
            if (ayesha[left] >= 0)
			 {
                left++;
            }
            if (ayesha [right] < 0) 
			{
                right--;
            }
        }
    }
}

int main() {
    int ayesha[10] = {3, -5, 0, 2, 7, 4, -15, 6, -4, -8};
    int size = 10;

    arrange(ayesha, size);

    cout << "Output: ";
    for (int i = 0; i < size; ++i) {
        cout << ayesha[i] << " ";
    }
    cout << endl;

    return 0;
}