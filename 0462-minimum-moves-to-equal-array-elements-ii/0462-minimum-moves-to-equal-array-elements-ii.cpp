class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        // here there's no cost, so here
        // we can finf the target number simply now, by finding the median
        // 1 2 9 10
        // 8 6 0 2 -> 16
        sort(nums.begin(),nums.end());
        int target=0; // stores the index
        int val=0;
        if(n%2==0){
            target=(n/2)+1;
            val=nums[target-1];
        }
        else {
            target= n/2;
            val=nums[target];
        }
        int z=0;
        for(auto i : nums){
            z+=abs(i-val);
        }
        return z;
        
    }
};