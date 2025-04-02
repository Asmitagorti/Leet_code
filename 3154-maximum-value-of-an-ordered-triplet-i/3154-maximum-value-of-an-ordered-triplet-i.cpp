class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n=nums.size(),max=-1;
        for(long long i=0;i<n;++i){
            for(long long j=i+1;j<n;++j){
                for(long long k=j+1;k<n;++k){
                    long long z=nums[i]-nums[j];
                    long long res=z*nums[k];
                    if(res>max) max=res;
                }
            }
        }
        if(max==-1) return 0;
        return max;
    }
};