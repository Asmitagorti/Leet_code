class Solution {
public:
    int residuePrefixes(string s) {
        string res="";
        map<char,int>m;
        int ct=0;
        for(int i=0;s[i]!='\0';++i){
            res+=s[i];
            m[s[i]]++;
            // if(m[s[i]]!=1) continue;
            int len=res.length();
            if(m.size()==(len%3)) ct++;
        }
        return ct;
    }
};