class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int i=0;
        int max=1,ct=1;
        if(nums.size()==0) return 0;
        sort(nums.begin(), nums.end());
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                i++;
                continue;
            }
            if(abs(nums[i]-nums[i+1])==1){
                ct++;
            } 
            else {
                ct=1;
            }
            max=(ct>max)?ct:max;
            i++;
        }
        return max;
    }
};