class Solution {
public:
// int mini = INT_MAX;
    int find(int i, int j, vector<vector<int>>& triangle, vector<vector<int>>& dp){
        if(i==triangle.size()){
            return 0;
        }
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        // i to track all the rows, to get 
        // int left=0,right=0;

            // pick ith index
            int left = find(i+1,j,triangle,dp);

            // unpick (i+1)th index

            int right = find(i+1,j+1,triangle,dp);

        return dp[i][j]=min(left,right) + triangle[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        // two cases : 
        // pick : using index i
        // unpick : using index i+1
        // memset(dp,INT_MAX,sizeof(dp));
        int n= triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        int ans = find(0,0,triangle,dp);
        return ans;

    }
};