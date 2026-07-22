class Solution {
public:
    void fun(vector<vector<int>>&grid,vector<vector<bool>>&vis,vector<vector<int>>&res){
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]==1){
                    q.emplace(i,j);
                    res[i][j]=0;
                    vis[i][j]=true;
                }
            }
        }
        while(!q.empty()){
            int maxi=-1;
            auto [x,y]=q.front();
            q.pop();
            if(x-1>=0 && vis[x-1][y]==false) {
                vis[x-1][y]=true;
                res[x-1][y]=res[x][y]+1;
                q.emplace(x-1,y);
            }
            if(y-1>=0 && vis[x][y-1]==false) {
                vis[x][y-1]=true;
                res[x][y-1]=res[x][y]+1;
                q.emplace(x,y-1);
            }
            if(x+1<=grid.size()-1 && vis[x+1][y]==false) {
                vis[x+1][y]=true;
                res[x+1][y]=res[x][y]+1;
                q.emplace(x+1,y);
            }
            if(y+1<=grid[0].size()-1 && vis[x][y+1]==false) {
                vis[x][y+1]=true;
                res[x][y+1]=res[x][y]+1;
                q.emplace(x,y+1);
            }
        }
    }
    int maxDistance(vector<vector<int>>& grid) {
        vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),false));
        vector<vector<int>>res(grid.size(),vector<int>(grid[0].size(),-1));
        int land = 0;
        int water = 0;
        int M=-1;
        fun(grid,vis,res);
        for(int i=0;i<res.size();++i){
            for(int j=0;j<res[0].size();++j){
                if(grid[i][j]==1) land++;
                else water++;
                M=max(M,res[i][j]);
            }
        }
        return (water==0 || land==0)?-1:M;
    }
};