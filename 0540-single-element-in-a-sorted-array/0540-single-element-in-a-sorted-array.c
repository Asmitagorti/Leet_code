int singleNonDuplicate(int* nums, int numsSize) {
    int X=0;
    for(int i=0;i<numsSize;++i){
        X^=nums[i];
    }
    return X;
}