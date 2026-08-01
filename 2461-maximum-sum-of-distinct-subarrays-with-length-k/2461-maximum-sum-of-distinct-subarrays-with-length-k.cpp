class Solution {
public:
    long long maximumSubarraySum(vector<int>&nums, int k) {
        long long sum=0,maxi=0;
        int n=nums.size();
        map<int,int>m;
        for(int i=0;i<k;i++){
            m[nums[i]]++;
            sum+=nums[i];
        }
        if(m.size()==k) maxi=sum;
        int i=0;
        for(int j=k;j<n;j++){
            m[nums[j]]++;
            sum+=nums[j];
            while(m[nums[i]]>1 || j-i+1>k) {
                m[nums[i]]--;
                if(m[nums[i]]==0) m.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
            // if(j-i+1>k){
            //     m[nums[i]]--;
            //     sum-=nums[i];
            //     i++;
            // }
            if(j-i+1==k && m.size()==k) maxi=max(maxi,sum);
        }
        return maxi;
    }
};