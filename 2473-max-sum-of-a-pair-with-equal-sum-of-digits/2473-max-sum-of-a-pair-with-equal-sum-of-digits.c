#include <stdlib.h>

int digitSum(int x) {
    int sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    int d1 = digitSum(num1);
    int d2 = digitSum(num2);
    
    if (d1 == d2) return num2 - num1; // Sort by value (descending) if digit sum is the same
    return d1 - d2; // Otherwise, sort by digit sum (ascending)
}

int maximumSum(int* nums, int numsSize) {
    if (numsSize < 2) return -1;

    qsort(nums, numsSize, sizeof(int), compare);

    int maxSum = -1;

    for (int i = 1; i < numsSize; i++) {
        if (digitSum(nums[i]) == digitSum(nums[i - 1])) {
            int pairSum = nums[i] + nums[i - 1];
            if (pairSum > maxSum) maxSum = pairSum;
        }
    }

    return maxSum;
}
