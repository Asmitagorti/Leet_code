// User function Template for C++

class Solution {
  public:
    void bfs(vector<int>adj[], vector<int>&vis, vector<int>&dist,int src){
        queue<int>q;
        q.push(src);
        //dist[src]+=1;
        vis[src]=1;
        dist[src]=0;
        while(!q.empty()){
            int node = q.front();
            q.pop();            
            for(auto i:adj[node]){
                if(vis[i]==0){
                    q.push(i);
                    vis[i]=1; // mark visted
                    dist[i]=dist[node]+1;
                    if(i==30) return;
                    // need to incremenet from prev
                }
            }
        }
    }
    int minThrow(int N, int arr[]) {
        // code here
        vector<int>adj[31];
        // ladders map
        map<int,int>ladders;
        // if the number of ladders are equal to snakes
        // take till N, i+=2
        for(int i=0;i<2*N;i+=2){
            ladders[arr[i]]=arr[i+1];
        }
        for(int i=1;i<=30;++i){
            for(int j=1;j<=6;++j){
                int jump = i+j;
                if(jump<=30){
                    if(ladders.find(jump)!=ladders.end()){
                        adj[i].push_back(ladders[jump]);
                    }
                    else{
                        adj[i].push_back(jump);
                    }
                }
            }
        }
        vector<int>dist(31, 1e9);
        vector<int>vis(31,0);
        bfs(adj,vis,dist,1);
        for(int i=1;i<=30;++i){
            // cout<<"i"<<i<<":"<<dist[i]<<" ";
            
        }
        // cout<<endl;
        return dist[30];
        
    }
};