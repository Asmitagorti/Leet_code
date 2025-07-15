class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int i=0,l=0,r=0;
        string str;
        unordered_map<string,int>mp;
        vector<string>v;
        if(s.length()<10) return v;
        while(i< 10) {
            str += s[i];
            r++;
            i++;
        }
        while(r<= s.size()) {
            mp[str]++;
            str.erase(0,1);
            str+= s[r]; 
            r++;
        }
        for(auto i : mp){
            if(i.second>1) v.push_back(i.first);
        }
        return v;
    }
};