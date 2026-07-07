class Solution {
public:
    long long sumAndMultiply(int n) {
        int res=0,ct=0,sum=0;
        long long val=0;
        string s="";
        int ori=n;
        while(ori!=0){
            int dig=ori%10;
            sum+=dig;
            ct++;
            if(dig!=0) s.push_back(dig+'0');
            ori/=10;
        }
        reverse(s.begin(),s.end());
        if(!s.empty()) val=stoi(s);
        return sum*val;
    }
};