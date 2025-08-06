class Solution {
public:
    void dfs(vector<vector<char>>&grid, int i, int j){
        int n=grid.size();
        int sum=0;
        int m=grid[0].size();
        if(i< 0|| i>=n || j>=m || j<0 ||grid[i][j]=='0') return;
        // if(grid[i][j]=='0') return;

        // vis[i][j]=1; // mark
        // i-1,j
        // i,j-1
        // i+1,j
        // i,j+1
        grid[i][j]='0';
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        dfs(grid,i+1,j);
        dfs(grid,i,j+1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
         // u have to keep searching till ur out of 1's or smthg
        // basically, u need to check the number of 1's that have
        // 0's on all 4 sides

        // i need to find a way where i just check one 1, and
        // ct++, and then skip to the next island (if any)

        // constraints are less, max no of searches == 300*300
        // == 9*10^4 -> 10^4, we're good
        int n=grid.size();
        int m=grid[0].size();
        int ct=0;
        // vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    ct++;
                } 
            }
        }
        return ct;
    }
};