class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,n=nums.size();
        int ct_0=0,maxi=0,z=0;
        for(auto i:nums) if(i==0) z++;
        if(z==0) return n-1;
        while(r<n){
            if(nums[r]==0) ct_0++;
            if(ct_0>1){
                if(nums[l]==0) ct_0--;
                l++;
            }
            if(ct_0==1){
                int len=r-l;
                maxi=max(maxi,len);
            }
            r++;
        }
        return maxi;
    }
};