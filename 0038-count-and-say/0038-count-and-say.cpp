class Solution {
public:
    string fun(string s){
        string res;
        vector<pair<char,int>>v;
        int i=0;
        while(i<s.length()){
            int ct=1;
            int j=i+1;
            char ch=s[i];
            while(j<s.length() && ch==s[j]){
                ct++;
                j++;
               // 111221
            }
            v.push_back({ch,ct});
        i=j;
        }
        for(auto hi:v){
            res+=to_string(hi.second)+hi.first;
        }
        return res;
    }
    string countAndSay(int n) {
        string str="1";
        // str[0]="1";
        for(int i=2;i<=n;++i){
            str=fun(str);
        }
        return str;
    }
};