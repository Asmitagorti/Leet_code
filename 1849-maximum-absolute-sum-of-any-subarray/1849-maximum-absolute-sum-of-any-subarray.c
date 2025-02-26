int maxAbsoluteSum(int* nums, int numsSize) {
    if (nums == NULL || numsSize == 0) return 0; 

    int currentMaxSum = 0, maxSum = 0; 
    int currentMinSum = 0, minSum = 0; 

    for (int i = 0; i < numsSize; ++i) {
        currentMaxSum += nums[i];
        if (currentMaxSum > maxSum) maxSum = currentMaxSum;
        if (currentMaxSum < 0) currentMaxSum = 0;
        currentMinSum += nums[i];
        if (currentMinSum < minSum) minSum = currentMinSum;
        if (currentMinSum > 0) currentMinSum = 0;
    }

    return (maxSum > abs(minSum)) ? maxSum : abs(minSum);
}

