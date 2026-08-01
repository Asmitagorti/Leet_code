class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi=0,ct_0=0;
        int l=0,r=0,n=nums.size();
        while(r<n){
            if(nums[r]==0){
                ct_0++;
            }
            if(ct_0<=k) {
                maxi=max(r-l+1,maxi);
                // cout<<maxi<<endl;
            }
            while(ct_0>k){
                if(nums[l]==0)ct_0--;
                l++;
            }
            if(ct_0<=k) {
                maxi=max(r-l+1,maxi);
                // cout<<maxi<<endl;
            }
            r++;
        }
        return maxi;
    }
};