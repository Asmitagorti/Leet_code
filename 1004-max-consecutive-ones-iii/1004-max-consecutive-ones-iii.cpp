class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // for(auto i:fin) cout<<i.first<<" "<<i.second<<endl;
        int maxi=0;
        int zero=0,l=0,curr=0;
        for(int r=0;r<nums.size();++r){
            if(nums[r]==0) zero++;
            while(zero>k){
                if(nums[l]==0) zero--;
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;

    }
};