class Solution {
public:
    void fun(vector<int>nums, vector<vector<int>>&fin,vector<int>v, vector<bool>vis){
        if(v.size()==nums.size()){
            fin.push_back(v);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(!vis[i]){
                v.push_back(nums[i]);
                vis[i]=true;
                fun(nums,fin,v,vis);
                vis[i]=false;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>fin,hi;
        vector<int>v;
        vector<bool>vis(nums.size(),false);

        fun(nums,fin,v,vis);
        set<vector<int>>seen;
        for(auto i:fin){
            if(seen.insert(i).second){
                hi.push_back(i);
            }
        }
        return hi;
    }
};