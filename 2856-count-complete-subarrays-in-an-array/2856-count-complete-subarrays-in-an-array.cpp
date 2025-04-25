class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        set<int> s(nums.begin(), nums.end()); 
        int size = s.size();
        for (int i = 0; i < n; ++i) {
            set<int> hi;
            for (int j = i; j < n; ++j) {
                hi.insert(nums[j]);
                if (hi.size() == size) {
                    res++;
                }
            }
        }

        return res;
    }
};