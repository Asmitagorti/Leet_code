int minimumOperations(int* nums, int numsSize) {
    int ct=0;
    for(int i=0;i<numsSize;++i){
        if(nums[i]%3!=0) ct++;
    }
    return ct;
}