class Solution {
public:
    vector<pair<char,int>> u_there(const string &word){
        vector<pair<char,int>>res;
        int i=0;
        while(i<word.length()){
            int j=i;
            while(j<word.length() && word[j]==word[i]) j++;
            res.push_back({word[i],j-i});
            i=j;
        }
        return res;
    }
    int possibleStringCount(string word) {
        // i want to find the the occurences each character, repititions allowed
        // example : aabbaac, a:2 b:2 a:2 c:1
        // once i get this, i can run a loop thru the freq
        // find out whichever is >=2, and do : ct+=freq-1
        // at the end: return ct+1;
        int len=word.length();
        int ct=0;
        auto hi=u_there(word);
        for(auto i: hi){
            if(i.second>=2) ct+=i.second-1;
        }
        return ct+1;
    }
};