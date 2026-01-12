class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int start=nums.size(),n=nums.size();
        int val=0,ct=0;
        for(int i=0;i<n;++i){
            val=0;
            val+=nums[i];
            map<int,int>m;
            m[nums[i]]++;
            for(int j=i+1;j<n;++j){
                val+=nums[j];
                m[nums[j]]++;
                // cout<<"val is "<<val<<endl;
                if(m.count(val)) ct++;
            }
        }
        return ct+start;
    }
};