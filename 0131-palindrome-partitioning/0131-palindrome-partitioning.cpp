class Solution {
public:
    bool pallindrome(string s){
        if(s.size()<=1) return true;
        if(s[0]!=s[s.size()-1]) return false;
        return pallindrome(s.substr(1,s.size()-2));
    }
    void solve(int i, string s,vector<string>&v, vector<vector<string>>&ans){
        if(i==s.size()) {
            ans.push_back(v);
            return;
        }
        for(int j=i;j<s.size();j++){
            string st=s.substr(i,j-i+1);
            if(pallindrome(st)) {
                v.push_back(st);
                solve(j+1,s,v,ans);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        solve(0,s,v,ans);
        return ans;
    }
};