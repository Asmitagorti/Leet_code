class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
        // 2:4, 1:1, 3:1, 5:1
        for(int i=0;i<n;++i){
            int ct=0;
            for(int j=i;j<n;++j){
                if(nums[j]==target) ct++;
                if(ct>((j-i+1)/2)) ans++;
            }
        }
        return ans;
    }
};