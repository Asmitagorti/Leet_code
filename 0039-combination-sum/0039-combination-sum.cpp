class Solution {
public:
    void fun(vector<int>c,int i,int t,vector<vector<int>>&mat,vector<int>v){
        if(t == 0) {
            mat.push_back(v);
            v.clear();
        }
        if(t>0 && i<c.size()){
            v.push_back(c[i]);
            fun(c,i,t-c[i],mat,v);
            v.pop_back();
        }
        if(i+1<c.size() && t>0) {
            fun(c,i+1,t,mat,v);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>mat;
        vector<int>v;
        fun(c,0,t,mat,v);
        return mat;
    }
};

