int maxAdjacentDistance(int* nums, int numsSize) {
    int max=0;
    for(int i=0;i<numsSize;++i){
        int dif=abs(nums[i]-nums[(i+1)%numsSize]);
        if(dif>max){
            max=dif;
        }
    }
    return max;
}