class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<long long>pref;
        int maxi=-1;
        for(int i=0;i<nums.size();++i){
            maxi=max(maxi,nums[i]);
            pref.push_back(gcd(nums[i],maxi));
        }
        sort(pref.begin(),pref.end());
        long long sum=0,v=0;
        int n=pref.size();
        for(int i=0;i<n/2;++i){
            v=gcd(pref[i],pref[n-i-1]);
            sum+=v;
        }
        return sum;
    }
};