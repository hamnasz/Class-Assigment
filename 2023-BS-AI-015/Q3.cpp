//file: file eman.cpp
//date: 1-05-2024
//name: eman tahir
//reg no. 2023-bs-ai-015
//question statement:Write a function find(…) that accepts a one-dimensional integer array of size 10 as an argument to thefunction. Your program then finds the location and value of the largest and second-largest elements in aone-dimensional array. Display answers in main().
#include <iostream>
using namespace std;
int find(int eman[]) {
    int m1 = eman[0];
    int m2 = eman[0];
    int index1 = 0;
    int index2 = 0;

    for (int i = 1; i < 10; i++) {
        if (eman[i] > m1) {
            m2 = m1;
            m1 = eman[i];
            index2 = index1;
            index1 = i;
        } else if (eman[i] > m2 && eman[i] != m1) {
            m2 = eman[i];
            index2 = i;
        }
    }

    cout << "Largest element: " << m1 << "  index:" << index1 <<endl;
    cout << "Second largest element: " << m2 << "  index:  " << index2 <<endl;
}

int main() {
    int eman[10] = {19,32,45,67,3,7,20,58,91,83};
    find(eman);
    return 0;
}
