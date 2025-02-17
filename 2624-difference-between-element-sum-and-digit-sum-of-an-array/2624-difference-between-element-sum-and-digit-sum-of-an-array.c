int digit(int x){
    int res=0;
    while(x){
        res+=x%10;
        x/=10;
    }
    return res;
}
int differenceOfSum(int* nums, int numsSize) {
    int sum=0;
    int d=0;
    for(int i=0;i<numsSize;++i){
        sum+=nums[i];
        d+=digit(nums[i]);
    }
    return abs(d-sum);
}