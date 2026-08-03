class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0,n=nums.size(),maxi=0;
        for(auto i:nums) sum+=i;
        if(sum<x) return -1;
        int tar=sum-x;
        bool flag=false;
        // find max subarray length that forms sum tar
        int l=0,r=0,cum=0;
        while(r<n && l<=r){
            cum+=nums[r];
            while(cum>tar){
                cum-=nums[l];
                l++;
            }
            if(cum==tar){
                flag=true;
                int len=r-l+1;
                maxi=max(maxi,len);
            }
            r++;
        }
        return (flag==true)?(n-maxi):-1;
    }
};