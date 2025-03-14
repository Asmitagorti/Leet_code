int check(int* candies, int candiesSize, long long k, int mid){
    long long sum=0;
    for(int i=0;i<candiesSize;++i){
        sum+=(candies[i]/mid);
    }
    return (sum>=k);
}
int maximumCandies(int* candies, int candiesSize, long long k) {
    long long total=0;
    int max=INT_MIN;
    for(int i=0;i<candiesSize;++i){
        if(candies[i]>max) max=candies[i];
        total+=candies[i];
    }
    if(total<k) return 0;
    int low=1, high=max, mid=0, res=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(check(candies,candiesSize,k,mid)){
            res=mid;
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    return res;
}