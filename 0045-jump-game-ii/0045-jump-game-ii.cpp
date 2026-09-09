class Solution {
public:
    int jump(vector<int>& nums) {
        int far=0,end=0,maxi=0,ct=0;
        for(int i=0;i<nums.size()-1;i++){
            maxi=max(maxi,nums[i]+i);
            if(i==end){
                ct++;
                end=maxi;
            }
        }
        return ct;
    }
};