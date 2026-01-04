class Solution {
public:
    string largestEven(string s) {
        // 1112 -> 1:3, 2:1
        // 221 -> 1:1, 2:2
        int n=s.size();
        map<char,int>m;
        for(auto i:s) m[i]++;
        if(!m.count('2')) return "";
        if(s[n-1]=='2') return s;
        else {for(int i=n-1;i>=0;--i){
            if(s[i]=='1') s.erase(i,1);
            else break;
        }}
        return s;
    }
};