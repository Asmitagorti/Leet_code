#include <stdio.h>
#include <stdlib.h>

int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    int* C = (int*)malloc(ASize * sizeof(int));
    int commonCount = 0;
    *returnSize = ASize;

    // Iterate through all indices of the arrays
    for (int i = 0; i < ASize; ++i) {
        commonCount = 0; // Reset count for each prefix
        for (int j = 0; j <= i; ++j) {
            // Check if current elements in A and B are equal
            for (int k = 0; k <= i; ++k) {
                if (A[j] == B[k]) {
                    commonCount++;
                    break;
                }
            }
        }
        C[i] = commonCount;
    }
    return C;
}

