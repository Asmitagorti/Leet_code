class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max=INT_MIN;
        int flag=0;
        int n=nums.size();
        for(int i=0;i<n-1;++i){
            for(int j=i+1;j<n;++j){
            if(nums[i]<nums[j]){
                if(nums[j]-nums[i]>max){
                    max=nums[j]-nums[i];
                    flag=1;
                }
            }
            }
        }
        if(flag==0) max=-1;
        return max;
    }
};