class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // 1 2 5
        // 1 1
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        // 7 8 9 10
        // 5 6 7 8
        int ct=0;
        int l=0,r=0,n1=g.size(),n2=s.size();
        while(r<n2 && l<n1){
            if(s[r]>=g[l]) {
                ct++;
                l++;
            }
            r++;
        }
        return ct;
    }
};