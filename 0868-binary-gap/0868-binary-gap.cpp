class Solution {
public:
    int binaryGap(int n) {
        int temp=n,maxi=-1;
        string s="";
        while(temp!=1){
            if(temp%2==0) s+='0';
            else s+='1';
            temp/=2;
        }
        s+='1';
        reverse(s.begin(),s.end());
        // cout<<s<<endl;
        int l=0,r=1,len=s.size();
        while(r<len){
            while(s[r]=='0') {
                r++;
            }
            if(s[r]=='1') maxi=max(maxi,r-l);
            l=r;
            r++;
        }
        return (maxi==-1)?0:maxi;
    }
};