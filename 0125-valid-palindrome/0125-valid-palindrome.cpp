class Solution {
public:
    bool pal(string s){
        int n=s.size();
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[n-i-1]) return false;
        }
        return true;
    }
    string to_lower(string s){
        string t;
        for(auto i:s){
            if(i>=65 && i<=90) t+=(i+32);
            else if(i>=97 && i<=122) t+=i;
            else if(i>=48 && i<=57) t+=i;
            else continue;
        }
        return t;
    }
    bool isPalindrome(string s) {
        if(s==" ") return true;
        string st=to_lower(s);
        cout<<st;
        return (pal(st)?true:false);
    }
};