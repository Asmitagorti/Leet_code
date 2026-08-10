class Solution {
public:
    int check(vector<int>&w, int val, int days){
        int r=0,n=w.size(),ct=0,d=1;
        while(r<n){
            ct+=w[r];
            if(ct>val){
                ct=w[r];
                d++;
            }
            r++;
        }
        return d;
    }
    int bin_search(vector<int>&w, int l, int h,int days){
        while(l<=h){
            int mid=(l+h)/2;
            int hi=check(w,mid,days);
            if(hi<=days){
                h=mid-1;
            }
            else if(hi>days){
                l=mid+1;
            }
        }
        return l;
    }
    int shipWithinDays(vector<int>& w, int days) {
       int l=0,h=0;
       for(auto i:w){
           l=max(l,i);
           h+=i;
       }
       int res=bin_search(w,l,h,days);
       return res;
    }
};