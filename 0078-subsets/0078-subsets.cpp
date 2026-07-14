class Solution {
public:
    void fun(vector<vector<int>>&res, vector<int>v, vector<int>nums, int i){
        if(i>=nums.size()){
            return;
        }
        //res.push_back(v);
        v.push_back(nums[i]);
        fun(res,v,nums,i+1);
        res.push_back(v);
        v.pop_back();
        fun(res,v,nums,i+1);
        res.push_back(v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res,hi;
        vector<int>v;
        fun(res,v,nums,0);

        set<vector<int>>seen;
        for(auto i:res){
            if(seen.insert(i).second) hi.push_back(i);
        }
        return hi;
    }
};