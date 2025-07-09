class Solution {
public:
    // bool dot_prod(vector<int>&hi, vector<int>&hello){
    //     return (( hi[0]*hello[0] + hi[1]*hello[1])==0);
    // }
    int dist(vector<int>& x, vector<int>& y){
        int v1=y[0]-x[0];
        int v2=y[1]-x[1];
        return (v1*v1) + (v2*v2);
    }
    bool all(vector<int>&x){
        for(auto i:x){
            if(i<=0) return false;
        }
        return true;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int>all_dist;
        all_dist.push_back(dist(p1,p2));
        all_dist.push_back(dist(p2,p3));
        all_dist.push_back(dist(p3,p4));
        all_dist.push_back(dist(p1,p4));
        all_dist.push_back(dist(p1,p3));
        all_dist.push_back(dist(p2,p4));
        
        sort(all_dist.begin(), all_dist.end());
        bool flag=false;
        vector<int> v1={p2[0]-p1[0],p2[1]-p1[1]};
        vector<int> v2={p3[0]-p2[0],p3[1]-p2[1]};
        vector<int>v3={p1[0]-p4[0],p1[1]-p4[1]};
        vector<int>v4={p3[0]-p4[0],p3[1]-p4[1]};

        if(all_dist[0]==all_dist[1] && all_dist[1]==all_dist[2] && all_dist[2]==all_dist[3] && all_dist[3]==all_dist[0] && all_dist[4]==all_dist[5] && (all(all_dist)==1)) flag=true;
        // else if(dot_prod(v1,v2) && dot_prod(v3,v4)) flag=true;
        return (flag==true);
    }
};