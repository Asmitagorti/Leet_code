
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* left(int* nums, int numsSize) {
    int *arr = (int*)malloc(numsSize * sizeof(int));
    arr[0] = 0; 
    int sum = 0;
    for (int i = 1; i < numsSize; ++i) {
        sum += nums[i - 1];  
        arr[i] = sum;
    }
    return arr;
}


int* right(int* nums, int numsSize) {
    int *arr = (int*)malloc(numsSize * sizeof(int));

    arr[numsSize - 1] = 0; 
    int sum = 0;
    for (int i = numsSize - 2; i >= 0; --i) {
        sum += nums[i + 1];  
        arr[i] = sum;
    }
    return arr;
}
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* ARR = (int*)malloc(numsSize * sizeof(int));
    int* leftArr = left(nums, numsSize);
    int* rightArr = right(nums, numsSize);

    for (int i = 0; i < numsSize; ++i) {
        ARR[i] = abs(leftArr[i] - rightArr[i]);
    }

    free(leftArr);
    free(rightArr);
    return ARR;
}
