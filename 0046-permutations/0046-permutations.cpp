class Solution {
public:
vector<vector<int>>x;
    void call(vector<int>&y, vector<int>&nums){
        // vector<vector<int>>x;
        if(y.size()==nums.size()){
            x.push_back(y);
            return;
        }
        if(y.size()<nums.size()){
            for(int i=0;i<nums.size();++i){
                if(find(y.begin(), y.end() ,nums[i])==y.end()){
                    y.push_back(nums[i]);
                    call(y,nums);
                    y.pop_back();
                }
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        // reursion 
        // we need n! outputs
        // start with empty vector
        // appaned all the possiblel options into it
        vector<int>y;
        // vector<vector<int>>x;
        call(y,nums);
        return x;
    }
};