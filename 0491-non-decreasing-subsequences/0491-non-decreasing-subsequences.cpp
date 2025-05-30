    class Solution {
    public:
        bool don(vector<int>kitty){
            for(int i=0;i<kitty.size()-1;++i){
                if(kitty[i+1]<kitty[i]) return false;
            }
            return true;
        }
        void check(int i, int n, vector<int>& nums,set<vector<int>>&pup,vector<int>&kitty){
            if(i==n){
            if(kitty.size()>=2 && don(kitty)){
                pup.insert(kitty);
            }
            return;
            }
            kitty.push_back(nums[i]);
            
            check(i+1,n,nums,pup,kitty);
            kitty.pop_back();
            check(i+1,n,nums,pup,kitty);
        }
        vector<vector<int>> findSubsequences(vector<int>& nums) {
            set<vector<int>>pup;
            vector<int>kitty;
            int n=nums.size();
            check(0,n,nums,pup,kitty);
            return vector<vector<int>>(pup.begin(), pup.end());
        }
    };