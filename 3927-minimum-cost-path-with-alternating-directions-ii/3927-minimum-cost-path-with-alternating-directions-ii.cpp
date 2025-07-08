class Solution {
public:
    long long minCost(int m, int n, vector<vector<int>>& waitCost) {
        // find cost[i][j] ==> waitcost[i][j] + entrycost
        // find min, using dp ==> 2d array table
        // remove wait at 0,0 and at end
        // return dp[m-1][n-1]

// You enter a cell at odd time → pay entryCost/
// MAIN LOGIC,
// You wait in the same cell at even time → pay waitCost
        // vector<vector<int>>num[1000001][1000001];
        vector<vector<long long>> num(m,vector<long long>(n, 0)); 
        int i=0;
        while(i<m){
            int j=0;
            while(j<n){
                num[i][j]+=(waitCost[i][j]);
                num[i][j]+=(i+1)*(j+1);
                j++;
            }
            i++;
        }
        num[0][0]-=waitCost[0][0]; // 0,0
        num[m-1][n-1]-=waitCost[m-1][n-1]; // m-1,n-1
        // both dont have wait time,
        // construct 2d dp array, that finds the min way to reach that cell
        for(int i=1;i<m;++i){
            num[i][0]+=num[i-1][0]; // prefix row, vertical
        }
        for(int j=1;j<n;++j){
            num[0][j]+=num[0][j-1]; // prefix row, horizontal
            cout<<num[0][j]<<endl;
        }
        i=1;
        while(i<m){
            int j=1;
            while(j<n){
                num[i][j]+=min(num[i-1][j],num[i][j-1]);
                // dp, min()+cost[i][j]
                j++;
            }
            i++;
        }
        return num[m-1][n-1];

    }
};
