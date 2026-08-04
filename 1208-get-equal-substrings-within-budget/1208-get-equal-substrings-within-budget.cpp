class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        // since s and t are the same lengths, we use l and r for both
        int l=0,r=0,n=s.size(),maxi=0,len=0;
        // if(maxCost==0) return 1;
        while(r<n){
            int val=abs(s[r]-t[r]);
            //cout<<"val is "<<val<<endl;
            maxCost-=val;
            while(maxCost<0){
                int ct=0;
                maxCost+=abs(s[l]-t[l]);
                l++;
            }
            // if(val>maxCost){
            //     l++;
            //     // flag=true;
            // }
            len=r-l+1;
            maxi=max(maxi,len);
            r++;
            cout<<endl;
        }
        return maxi;
    }
};