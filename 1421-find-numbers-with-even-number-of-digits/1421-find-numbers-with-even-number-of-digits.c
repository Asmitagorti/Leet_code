int findNumbers(int* nums, int numsSize) {
    int count = 0;
    for (int i = 0; i < numsSize; ++i) {
        int size=0;
        while (nums[i]) {
            int digit = nums[i] % 10;
            size++;
            nums[i] /= 10;
        }
        if(size%2==0){
            count++;
        }
    }
    return count;
}