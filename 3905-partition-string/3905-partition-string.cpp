class Solution {
public:
    int seen(const set<string>& hi,const string &ch){
        return hi.count(ch)>0; // !!!!!
    }
    vector<string> partitionString(string s) {
        string new_s="";
        set<string>hi;
        vector<string>res;
        int l=s.size();
        hi.insert(string() +s[0]);
        res.push_back(string() +s[0]);
        for(int i=1;i<l;++i){
            if(seen(hi,string() +new_s +s[i])){
                new_s+=(string() +s[i]);

            }
            else{
                hi.insert(string() +new_s+s[i]);
                res.push_back(string() +new_s+s[i]);
                new_s="";
            }
        }
        return res;
    }
};