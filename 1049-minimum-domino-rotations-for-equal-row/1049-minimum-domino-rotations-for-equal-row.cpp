class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        int res = INT_MAX;
        int puppy = tops[0];
        int kitty = bottoms[0];

        int top_ct1 = 0, bottom_ct1 = 0;
        int flag1 = 1;
        for (int i = 0; i < n; i++) {
            if (tops[i] != puppy && bottoms[i] != puppy) {
                flag1 = 0;
                break;
            }
            if (tops[i] != puppy) top_ct1++;
            if (bottoms[i] != puppy) bottom_ct1++;
        }
        if (flag1 == 1) {
            res = min(res, min(top_ct1, bottom_ct1));
        }
        if (puppy != kitty) {
            int top_ct2 = 0, bottom_ct2 = 0;
            int flag2 = 1;

            for (int i = 0; i < n; i++) {
                if (tops[i] != kitty && bottoms[i] != kitty) {
                    flag2 = 0;
                    break;
                }
                if (tops[i] != kitty) top_ct2++;
                if (bottoms[i] != kitty) bottom_ct2++;
            }
            if (flag2 == 1) {
                res = min(res, min(top_ct2, bottom_ct2));
            }
        }
        if (res == INT_MAX)
            return -1;
        else
            return res;
    }
};
