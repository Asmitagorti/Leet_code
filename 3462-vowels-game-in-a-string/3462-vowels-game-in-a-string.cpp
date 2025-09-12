class Solution {
public:
    bool isvowel(char ch){
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    bool doesAliceWin(string s) {
        int vowel=0;
        int ct=0;
        for(auto i:s){
            if(isvowel(tolower(i))) ct++;
        }
        return (ct>=1)?true:false;
    }
};