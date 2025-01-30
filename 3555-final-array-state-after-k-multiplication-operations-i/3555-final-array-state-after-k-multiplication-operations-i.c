#include <stdlib.h>

int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    int* arr = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; ++i) {
        arr[i] = nums[i]; 
    }
    while (k--) {
        int minIndex = 0;
        for (int i = 1; i < numsSize; ++i) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }
        arr[minIndex] *= multiplier;
    }

    *returnSize = numsSize;
    return arr;
}
