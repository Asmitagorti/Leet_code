class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j){
        int sum=1;
        int m=grid.size();
        int n= grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0) return 0;
        grid[i][j]=0;
        sum+=dfs(grid,i+1,j);
        sum+=dfs(grid,i-1,j);
        sum+=dfs(grid,i,j+1);
        sum+=dfs(grid,i,j-1);

        return sum;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ct=0,res=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(grid[i][j]==1){
                    // ct+=1;
                    ct=dfs(grid,i,j);
                    cout<<"ct is "<<ct<<" ";
                    res = max(res,ct);

                }
            }
        }
        return res;
    }
};