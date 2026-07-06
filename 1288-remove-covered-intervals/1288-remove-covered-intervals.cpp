class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& v) {
        int ct=0,n=v.size();
        sort(v.begin(),v.end(),cmp);
        int maxR=0;
        for(auto i:v){
            if(i[1]<=maxR) ct++;
            else maxR=i[1];
        }
        return n-ct;
    }
};