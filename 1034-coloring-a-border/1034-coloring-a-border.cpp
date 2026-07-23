class Solution {
public:
    bool valid(vector<vector<int>>& grid,int i, int j, int ori){
        if(i-1>=0 && j-1>=0 && i+1<grid.size() && j+1<grid[0].size() && grid[i-1][j]==ori && grid[i][j-1]==ori && grid[i+1][j]==ori && grid[i][j+1]==ori) return false;
        return true;
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>res(n,vector<int>(m,-1));
        vector<pair<int,int>>v;
        queue<pair<int,int>>q;
        int ori=grid[row][col];
        // if(valid(grid,row,col,ori)) grid[row][col]=color;
        q.emplace(row,col);
        res[row][col]=0;
        int dx[4]={-1,0,1,0};
        int dy[4]={0,-1,0,1};
        while(!q.empty()){
            auto [x,y]=q.front();
            // cout<<x<<" "<<y<<endl;
            if(valid(grid,x,y,ori)) v.push_back({x,y});
            q.pop();
            for(int k=0;k<4;++k){
                int nx=dx[k],ny=dy[k];
                int v1=nx+x,v2=ny+y;
                if(v1>=0 && v1<n && v2>=0 && v2<m && res[v1][v2]==-1){
                    if(grid[v1][v2]==ori){
                        q.emplace(v1,v2);
                        res[v1][v2]=0;
                    }
                }
            }
        }
        for(auto i:v){
            auto [x,y]=i;
            grid[x][y]=color;
        }
        return grid;
    }
};

// bfs, push the (row,col) into the queue
// check all of its 4 neighbors, if the neighbor is not in the boundary of the grid, and is bordering all cells of the same color and is the same color itself, do not change the color
// else change the color (same color)