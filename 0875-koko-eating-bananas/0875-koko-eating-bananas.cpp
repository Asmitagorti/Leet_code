class Solution {
public:
    bool check(vector<int>&piles,int val, int k){
        long long ct=0,v=0;
        for(auto i:piles){
            if(i!=0 && val!=0 ) v=(i+val-1)/val;
            // cout<<v<<endl;
            ct+=v;
        }
        // cout<<"ct is "<<ct<<"val is "<<val<<endl;
        return (ct<=k);
    }
    int bin_search(vector<int>&piles, int l,int h, int k){
        while(l<=h){
            int mid=l+(h-l)/2;
            if(check(piles,mid,k)){
                // cout<<mid<<endl;
                h=mid-1;
            }
            else l=mid+1;
        }
        return l;
    }
    int minEatingSpeed(vector<int>& piles, int k) {
        int h=0,n=piles.size();
        if(n==1) return (piles[0]+k-1)/k;
        for(auto i:piles) h=max(i,h);
        int res=bin_search(piles,1,h,k);
        return res;
    }
};