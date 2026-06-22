class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // b, a, l, o, n
        map<char,int>m;
        int ct=0;
        int mini=INT_MAX,hi=INT_MAX;
        for(auto i:text) m[i]++;
        for(auto i:m){
            if(i.first=='b' || i.first=='a' || i.first=='n') {
                ct++;
                mini=min(mini,i.second);
            }
            else if( i.first=='l'){
                int val=i.second/2;
                hi=min(hi,val);
                ct++;
            }
            else if( i.first=='o'){
                int val=i.second/2;
                hi=min(hi,val);
                ct++;
            }
        }
        // cout<<ct;
        return (ct==5)?(min(mini,hi)):0;
    }
};