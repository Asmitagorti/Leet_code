class Solution {
public:
    int dp[1001];
    int find(vector<int>&nums, int target){
        // find finds the count of combination to produce target from nums
        // find(0) count of combinations to produce target from nums -> 1
        if(target==0) return 1;
        if(dp[target]!=-1) return dp[target];
        int n= nums.size();
        int ct=0;
        for(int i=0;i<n;++i){
            if(target-nums[i]>=0){
                ct+= find(nums,target-nums[i]);
            }
        }
        return dp[target] = ct;
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        int ans = find(nums,target);
        return ans;
    }
};