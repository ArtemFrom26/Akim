#include <iostream>
#include <cstdlib>
#include "MergeSort.h"

int main() {
    int* A = new int[10];
    
    for(int i = 0; i < 10; i++) {
        A[i] = rand();
        std::cout << A[i] << "\n";
    }

    std::cout << '\n';

    MergeSort(A, 10);

    for(int i = 0; i < 10; i++) {
        std::cout << A[i] << '\n';
    }
}
