class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int ct=0,o=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j]==2) {
                    q.emplace(i,j);
                    vis[i][j]=true;
                }
                else if(grid[i][j]==1) o++;
            }
        }
        if(o==0) return 0;
        int dx[4]={-1,0,1,0};
        int dy[4]={0,-1,0,1};
        while(!q.empty()){
            int N=q.size();
            while(N--){
                auto [x,y]=q.front();
                // cout<<x<<" "<<y<<endl;
                q.pop();
                for(int k=0;k<4;++k){
                    int v1=dx[k]+x;
                    int v2=dy[k]+y;
                    if(v1>=0 && v1<n && v2>=0 && v2<m){
                        if(grid[v1][v2]==1 && !vis[v1][v2]) {
                            q.emplace(v1,v2);
                            grid[v1][v2]=2;
                            vis[v1][v2]=true;
                        }
                    }
                }
            }
            ct++;
        }
        // for(int i=0;i<n;++i){
        //     for(int j=0;j<m;++j) cout<<grid[i][j]<<" ";
        //     cout<<endl;
        // }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(grid[i][j]==1) return -1;
            }
        }
        return ct-1;
    }
};