int countPartitions(int* nums, int numsSize) {
    int ls=0,rs=0,total=0,ct=0;
    for(int i=0;i<numsSize;++i){
        total+=nums[i];
    }
    for(int i=0;i<numsSize-1;++i){
        ls+=nums[i];
        rs=total-ls;
        if(abs(ls-rs)%2==0) ct++;
    }
    return ct;
       
}