class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,i=0,maxi=0;
        for(int i=0;i<k;++i){
            sum+=nums[i];
        }
        maxi=sum;
        for(int j=k;j<nums.size();++j){
            sum+=nums[j];
            sum-=nums[i];
            maxi=max(maxi,sum);
            i++;
        }
        double av=(double)maxi/k;
        return (double)av;
    }
};