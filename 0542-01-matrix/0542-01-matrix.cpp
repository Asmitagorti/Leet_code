class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>&grid) { 
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>res(n,vector<int>(m,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j]==0){
                    q.emplace(i,j);
                    res[i][j]=0;
                }
            }
        }
        if(q.empty() || q.size()==n*m)  return grid;  
        int dx[4]={-1,0,1,0};
        int dy[4]={0,-1,0,1};
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();
            for(int k=0;k<4;++k){
                int nx=dx[k],ny=dy[k];
                if(nx+x>=0 && nx+x<n && ny+y>=0 && ny+y<m && res[nx+x][ny+y]==-1){
                    q.emplace(nx+x,ny+y);
                    res[nx+x][ny+y]=res[x][y]+1;
                }
            }
        }
        return res;
    }
};