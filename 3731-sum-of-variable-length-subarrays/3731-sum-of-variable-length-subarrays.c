int max(int a, int b){
    if(a>b) return a;
    else return b;
}

int subarraySum(int* nums, int numsSize) {
    char n[10001];
    int start=0;
    int sum=0;
    
    for(int i=0;i<numsSize;++i){
        start=max(0,i-nums[i]);
        for(int j=start;j<=i;++j){
            sum+=nums[j];
        }
    }
    return sum;
}