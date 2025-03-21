void flip(int* nums, int numsSize, int i){
    int j=i;
    while(j<=i+2){
        if(nums[j]==0) nums[j]=1;
        else if(nums[j]==1) nums[j]=0;
        j++;
    }
}
int minOperations(int* nums, int numsSize) {
    int ct=0;
    for(int i=0;i<numsSize-2;++i){
        if(nums[i]==0){
            flip(nums,numsSize,i);
            ct++;
        }
    }
    for(int i=0;i<numsSize;++i){
        if(nums[i]==0) return -1;
    }
    return ct;
}
