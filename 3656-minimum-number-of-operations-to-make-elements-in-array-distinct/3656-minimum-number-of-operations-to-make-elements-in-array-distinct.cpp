class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ct = 0, j =0;
        int n = nums.size();
        while (j < n) {
            int flag = 1;
            int freq[101] = {0};
            for (int i = j; i < n; i++) {
                int val = nums[i]; 
                freq[val]++;
                if (freq[val] > 1) {
                    flag = 0;
                    break;
                }
            }
            if (flag) break;
            ct++;
            j+= 3;
        }
        return ct;
    }
};
