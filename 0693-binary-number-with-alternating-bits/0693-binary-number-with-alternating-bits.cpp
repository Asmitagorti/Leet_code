class Solution {
public:
string binaryy(int n){
        string s="";
        while(n>0){
            s.push_back((n%2)+'0');
            n/=2;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    bool hasAlternatingBits(int n) {
        string s=binaryy(n);
        int len=s.length();
        int flag=1;
        for(int i=0;i<len;++i){
            if(s[i]==s[i+1]) flag=0;
        }
        return(flag==1);
    }
};