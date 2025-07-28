class Solution {
public:
    string longestPalindrome(string s) {
        string str;
        int len= s.size();
        int i=0,j=0,max=0;
        for(int k=0;k<len;++k){
            i=k;
            j=k+1;
            while(i>=0 && j<=len && s[i]==s[j]){
                int cur = j-i+1;
                if(cur>max){
                    max= cur;
                    str = s.substr(i,cur);
                }
                i--;
                j++;
            }
            i=k;
            j=k;
            while(i>=0 && j<=len && s[i]==s[j]){
                int cur = j-i+1;
                if(cur>max){
                    max = cur;
                    str = s.substr(i,cur);
                }
                i--;
                j++;
            }
        }
        return str
        ;
    }
};