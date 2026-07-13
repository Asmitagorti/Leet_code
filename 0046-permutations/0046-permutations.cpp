class Solution {
public:
    void fun(vector<int>nums, vector<vector<int>>&fin, vector<bool>vis, vector<int>v){
        if(v.size()==nums.size()){
            fin.push_back(v);
            return;
        }
        for(int i=0;i<nums.size();++i){
            if(!vis[i]){
                v.push_back(nums[i]);
                vis[i]=true;
                fun(nums,fin,vis,v);
                vis[i]=false;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>fin;
        vector<bool>vis(nums.size(),false);
        vector<int>v;
        fun(nums,fin,vis,v);

        return fin;
    }
};