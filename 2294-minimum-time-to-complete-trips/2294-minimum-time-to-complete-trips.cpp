class Solution {
public:
    bool check(vector<int>& time,long long x, int k){
        long long sum=0;
        int i=0,j=0;
        while(j<time.size()){
        sum+=(x/time[j]);
                j++;
            }
        return (sum>=k);
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long max=INT_MIN;
        for(auto i:time){
            if(i>max) max=i;
        }
        long long low=1,high=max*totalTrips,res=totalTrips;
        // what is high...
        while(low<=high){
            long long mid=(low+high)/2;
            if(check(time,mid,totalTrips)){
                res=mid;
                high=mid-1; // find smaller
            }
            else low=mid+1; // find higher
        }
        return res;
    }
};