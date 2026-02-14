class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        dp[0]=nums[0];
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        dp[1]=nums[1];
        int val=0;
        for(int i=2;i<n;++i){
            if(i>=3) val=dp[i-3];
            else val=0;
            dp[i]=max(nums[i]+dp[i-2],nums[i]+max(dp[i-2],val));
        }
        return max(dp[n-1],dp[n-2]);
        // {3,1}==nums, dp=={3,1}
        //{1,100,1,2,5,7,10} ==> {1,100,2,102,105,109,?}.
        // {1,100,1} ==> {1,100,2}
    }
};