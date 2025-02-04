int maxAscendingSum(int* nums, int numsSize) {
    int sum = nums[0], maxSum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[i - 1]) {  
            sum += nums[i];
        } else {  
            sum = nums[i];
        }
        if (sum > maxSum) {
            maxSum = sum;  
        }
    }
    
    return maxSum;
}
