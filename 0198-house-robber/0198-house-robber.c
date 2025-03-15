int rob(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    if (numsSize == 1) return nums[0];

    int p1 = 0, p2 = 0, temp;
    for (int i = 0; i < numsSize; i++) {
        temp = p1;
        p1 = (p2 + nums[i] > p1) ? p2 + nums[i] : p1;
        p2 = temp;
    }
    return p1;
}
