class Solution {
public:
    vector<vector<int>> ans; 
    void check(int cur, int len, vector<int> hi, vector<int>& arr, int i) {
        if (cur == len) {
            ans.push_back(hi);
            return;
        }
        if (i >= len) return;
        vector<int>pup = hi;
        pup.push_back(arr[i]);
        check(cur + 1, len, pup, arr, i + 1);
        check(cur + 1, len, hi, arr, i + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        // int left=0,right=0;
        // // vector<int>arr;
        // while(right<n){
            
        // }
        check(0, n, {}, nums, 0);
        return ans;
    }
};
