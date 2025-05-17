class Solution {
public:
    void sortColors(vector<int>& nums) {
        // directly operate on nums, in-place, space complexity : o(1)
        // 2-pointers
        // stack
        int n=nums.size();
        stack<int>pup;
        int i=0;
        while(1){
            if(i==n) break;
            if(nums[i]==2) pup.push(nums[i]);
            i++;
        }
        i=0;
        while(1){
            if(i==n) break;
            if(nums[i]==1) pup.push(nums[i]);
            i++;
        }
        i=0;
        while(1){
            if(i==n) break;
            if(nums[i]==0) pup.push(nums[i]);
            i++;
        }
        i=0;
        while(!pup.empty()){
            nums[i++]=pup.top();
            pup.pop();
        }
    }
};