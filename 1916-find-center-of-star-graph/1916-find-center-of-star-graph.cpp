class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>hi; // map<key , value> var_name 
        for(int i=0;i<edges.size();++i){ // u need to intialize the map...
            hi[edges[i][0]]=0;
            hi[edges[i][1]]=0;
        }
        for(int i=0;i<edges.size();++i){
            hi[edges[i][0]]++;
            hi[edges[i][1]]++;
        }
        for(auto i:hi){
            if(i.second==edges.size()) return i.first;
        }
        return 0;
    }
};
