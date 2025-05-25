class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long res=0;
        if(m>k) {
            res=(m-k);
        }
        else if(n>k) {
            res=(n-k);
        }
        return res*k;
        // no case of both m>k && n>k

    }
};