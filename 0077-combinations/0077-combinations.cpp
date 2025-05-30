class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        int total=1<<n;
        vector<vector<int>>arr;
        for(int i=0;i<total;++i){
            vector<int>pup;
            int ct=__builtin_popcount(i);
            if(ct==k){
            for(int j=0;j<n;++j){
                if(i&(1<<j)){ 
                    // checks if the bit at j is set (1)
                    pup.push_back(j+1); // numbers start from 1
                }
            }
            arr.push_back(pup);
            }
        }
        return arr;
    }
};