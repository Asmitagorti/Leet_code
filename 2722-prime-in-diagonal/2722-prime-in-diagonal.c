int isPrime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int diagonalPrime(int** nums, int numsSize, int* numsColSize) {
    int max = 0;
    // if(numsColSize[0]!=nums[0]) return 0;
    for (int i = 0; i < numsSize; ++i) {
        if (isPrime(nums[i][i]) && nums[i][i] > max) 
            max = nums[i][i];
        
        if (isPrime(nums[i][numsSize - i - 1]) &&
            nums[i][numsSize - i - 1] > max) 

            max = nums[i][numsSize - i - 1];
        
    }
    return max;
}
