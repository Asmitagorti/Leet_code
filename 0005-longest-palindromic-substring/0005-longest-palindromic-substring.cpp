class Solution {
public:
    string dp[1001];
    string solve(string s){
        int i=0,j=0;
        string str = "",res="";
        int len=s.size();
        int maxi=0;
        for(int k=0;k<len;++k){
            i=k;
            j=k;
            while(i>=0 && j<=len && s[i]==s[j]){
                int cur=j-i+1;
                if(cur>maxi){
                    maxi=cur;
                    str=s.substr(i,cur);
                }
                i--;
                j++;
            }
            int l=str.size();
            if(dp[l].empty()){
                dp[l]= str;
            }
            i=k;
            j=k+1;
            while(i>=0 && j<=len && s[i]==s[j]){
                int cur=j-i+1;
                if(cur>maxi){
                    maxi=cur;
                    str=s.substr(i,cur);
                }
                i--;
                j++;
            }
            l=str.size();
            if(dp[l].empty()){
                dp[l] = str;
            }
        }
        for(int i=1000;i>=0;--i){
            if(dp[i].empty()){
                continue;
            }
            else{
                res=dp[i];
                break;
            }
        }
        return res;
    }
    string longestPalindrome(string s) {
        // dp
        // recursive dp, cuz iterative dp needs a base case
        string r = solve(s);
        return r;


                                                                   
    }
};