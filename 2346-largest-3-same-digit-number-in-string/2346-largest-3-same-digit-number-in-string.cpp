class Solution {
public:
    string largestGoodInteger(string num) {
        string ans= "";
        int n= num.size();
        for(int i=0;i<n-2;++i){
            string s = num.substr(i,3);
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                if(s>ans) ans=s;
            }
        }
        return ans;
    }
};