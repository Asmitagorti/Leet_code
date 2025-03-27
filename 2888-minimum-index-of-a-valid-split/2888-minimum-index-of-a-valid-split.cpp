class Solution {
public:
    int check(int partA, int partA_length) {
        if (partA > partA_length / 2) return 0;
        else return -1;
    }

    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        map<int, int> freq;
        for (auto i : nums) {
            freq[i]++;
        }
        int f = -1, max_fre = 0;
        for (auto& i : freq) {
            if (i.second > n / 2) {
                f = i.first; 
                max_fre = i.second; 
                break;
            }
        }
        // if (f == -1) return -1; 

        int left = 0, right = max_fre;
        for (int i = 0; i < n; i++) {
            if (nums[i] == f) {
                left++;
                right--;
            }
            if (check(left, i + 1) == 0 && check(right, n - (i + 1)) == 0) {
                return i;
            }
        }

        return -1;
    }
};
