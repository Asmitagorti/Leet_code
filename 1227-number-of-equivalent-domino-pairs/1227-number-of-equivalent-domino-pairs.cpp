class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int ct=0;
        int n=dominoes.size();
        int freq[10][10]={};
        // i want [1,2] to be the same as [2.1]
        // for easier comparison
    
        for(auto pup: dominoes){
            int hey=pup[0], hi=pup[1];
            int x=max(hey,hi),y=min(hey,hi);
            ct+=freq[x][y];
            freq[x][y]++;
        }
        return ct;
    }
};