class Solution {
public:
    vector<string>res;
    bool valid(string s,int start,int end){
        int len=end-start+1;
        if(len<=0 || len>3) return false;
        if(len>1 && s[start]=='0') return false;
        string hi=s.substr(start,len);
        int val=stoll(hi);
        return (val>=0 && val<=255);
    }
    void fun(int start,string &s,int dot ){
        if(dot==0){
            if(valid(s,start,s.size()-1)) res.push_back(s);
            return;
        }
        for(int i=start;i<s.size();++i){
            if(valid(s,start,i)){
                s.insert(i+1,1,'.');
                fun(i+2,s,dot-1);
                s.erase(i+1,1);
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        if(s.size()<3 || s.size()>12) return {};
        string ori=s;
        fun(0,ori,3);
        return res;
    }
};