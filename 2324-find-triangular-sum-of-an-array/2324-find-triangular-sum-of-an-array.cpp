class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()!=1){
            vector<int>arr(nums.size()-1);
            for(int i=0;i<arr.size();++i){
                arr[i] =(nums[i]+nums[i+1])%10;
            } 
            nums=arr;
        }
        return nums[0];

    }
};