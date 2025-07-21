class Solution {
public:
    string makeFancyString(string s) {
        int len=s.length();
        if(len<=2) return s;
        string res="";
        for(int i=0;i<len;++i){
            char ch=s[i];
            if(res.length()>=2 && res[res.length()-1]==ch && res[res.length()-2]==ch){
                continue;
            }
            else res+=ch;
        }
        return res;
    }
};