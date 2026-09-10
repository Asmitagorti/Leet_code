class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       if(nums.empty())return {};
       vector<int>ans;
       map<int,int>m;
       for(int i:nums)m[i]++;
       for(auto i:m)if(i.second==2)ans.push_back(i.first);
       return ans;
    }
};