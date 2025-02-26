bool canJump(int *nums, int numsSize) {
    int maxReach = 0; 
    for (int i = 0; i < numsSize; i++) {
        if (i > maxReach) return false; // stuck
        maxReach = (i + nums[i] > maxReach) ? i + nums[i] : maxReach; 
    }
    return maxReach >= numsSize - 1; 
}