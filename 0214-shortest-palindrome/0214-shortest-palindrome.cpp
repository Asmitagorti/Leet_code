class Solution {
public:
    bool check(string s){
        int len=s.size();
        for(int i=0;i<len/2;++i){
            if(s[i]!=s[len-1-i]) return false;
        }
        return true;
    }

    string shortestPalindrome(string s) {
        int len=s.size();
        if (check(s)) return s;

        string x=s;
        reverse(x.begin(), x.end());
        int j;
        for (j=len;j>=0;--j) {
            if (s.compare(0, j, x, len-j, j)==0){
                // s.substr(0,j)==x.substr(len-j,j)
                break;
            }
        }
        string hi=x.substr(0,len-j);
        return hi + s;
    }
};
