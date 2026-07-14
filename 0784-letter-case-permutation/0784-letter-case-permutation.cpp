class Solution {
public:
    void fun(vector<string>&res, string &s,int j){
        if(j==s.size()) {
            res.push_back(s);
            return;
        }
        // use ch^32 to toggle a char
        fun(res,s,j+1);
        if(isalpha(s[j])){
            s[j]^=32;
            fun(res,s,j+1);
            s[j]^=32;
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>res,hi;
        string st;
        // for(auto i:s) m[s[i]]++;
        fun(res,s,0);

        // map<string,int>mapi;
        // for(auto i:res) mapi[i]++;
        // for(auto i:mapi) hi.push_back(i.first);
        return res;
    }
};