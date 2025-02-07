#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *arr = (int*)malloc((digitsSize + 1) * sizeof(int)); 
    for (int i = 0; i < digitsSize; i++) {
        arr[i] = digits[i];
    }

    arr[digitsSize - 1] += 1;

    // Handle cases where a digit becomes 10
    for (int i = digitsSize - 1; i > 0; i--) {
        if (arr[i] == 10) {
            arr[i] = 0;
            arr[i - 1] += 1; 
        }
    }

    // If the first digit becomes 10, expand the array
    if (arr[0] == 10) {
        arr[0] = 1;
        arr[digitsSize] = 0;
        *returnSize = digitsSize + 1;
        return arr;
    }

    *returnSize = digitsSize;
    return arr;
}
