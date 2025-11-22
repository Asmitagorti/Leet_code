class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ct=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]%3==0) continue;
            else{
                int a=nums[i]-1;
                int b=nums[i]+1;
                if(a%3==0 || b%3==0) ct++;
            }
        }
        return ct;
    }
};