class Solution {
  public:
    bool check(vector<int>&arr, long long val, int k){
        long long ct=1,sum=0;
        for(auto i:arr){
            sum+=i;
            if(sum>val){
                sum=i;
                ct+=1;
            };
        }
        return (ct<=k);
    }
    int bin_search(vector<int>&arr, long long l, long long h, int k){
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(check(arr,mid,k)) h=mid-1;
            else l=mid+1;
        }
        return l;
    }
    int findPages(vector<int> &arr, int k) {
        long long l=0,h=0;
        int n=arr.size();
        for(auto i:arr) {
            l = max(l,(long long)i);
            h+=i;
        }
        if(k>n) return -1;
        // if(k==n-1) return l;
        long long res=bin_search(arr,l,h,k);
        return (int)res;
    }
};