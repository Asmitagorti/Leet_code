int check(int* piles, int pilesSize, int h, int mid){
    long long sum=0;
    for(int i=0;i<pilesSize;++i){
        sum+=(piles[i]-1+mid)/mid;
    }
    return (sum<=h); // lowest speed
}
int minEatingSpeed(int* piles, int pilesSize, int h) {
    long long total=0;
    int max=INT_MIN;
    for (int i = 0; i < pilesSize; ++i) {
        if (piles[i] > max) {
            max = piles[i];
        }
    }
    int low=1, high=max, res=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(piles,pilesSize,h,mid)){
            res=mid;
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    return res;
}
