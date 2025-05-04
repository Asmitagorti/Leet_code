class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = size(dominoes);
        int res = 0;
        map<pair<int, int>, int> hey;
        for (int i = 0; i < n; i++) {
            if (dominoes[i][0] < dominoes[i][1]) {
                swap(dominoes[i][0], dominoes[i][1]);
            }
            hey[{dominoes[i][0], dominoes[i][1]}]++;
        }
        for (auto pup : hey) {
            res += (pup.second * (pup.second - 1)) / 2;  
        }

        return res; 
    }
};
