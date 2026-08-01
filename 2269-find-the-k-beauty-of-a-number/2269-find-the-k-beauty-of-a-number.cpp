class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ct=0;
        string s=to_string(num);
        string s1=s.substr(0,k);
        // cout<<s1<<endl;
        int v1=stoi(s1);
        if(num%v1==0) ct++;
        for(int j=k;j<s.size();j++){
            s1+=s[j];
            s1.erase(0,1);
            int val=stoi(s1);
            // cout<<s1<<"-->"<<val<<endl;
            if(val!=0 && num%val==0) {
                ct++;
            }
        }
        return ct;
    }
};