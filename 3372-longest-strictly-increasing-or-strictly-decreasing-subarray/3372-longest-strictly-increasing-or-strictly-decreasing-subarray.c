#include <stdio.h>

int decreasing(int *nums, int numsSize) {
    if (numsSize == 0) return 0;
    if (numsSize == 1) return 1;

    int ct = 1, max = 1;
    for (int i = 0; i < numsSize - 1; ++i) {
        if (nums[i] > nums[i + 1]) {
            ct++;
            if (ct > max) max = ct;
        } else {
            ct = 1; 
        }
    }
    return max;
}

int increasing(int *nums, int numsSize) {
    if (numsSize == 0) return 0;
    if (numsSize == 1) return 1;

    int ct = 1, max = 1;
    for (int i = 0; i < numsSize - 1; ++i) {
        if (nums[i] < nums[i + 1]) {
            ct++;
            if (ct > max) max = ct;
        } else {
            ct = 1; 
        }
    }
    return max;
}

int longestMonotonicSubarray(int *nums, int numsSize) {
    int x = increasing(nums, numsSize);
    int y = decreasing(nums, numsSize);
    return (x > y) ? x : y;
}