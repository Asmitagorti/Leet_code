class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int l=0,r=n-1;
        int maxi=0,mini=INT_MAX;
        while(l<r){
            if(h[l]<=h[r]){
                int dist=r-l;
                maxi=max(maxi,h[l]*dist);
                l++;
            }
            if(h[l]>h[r]){
                int dist1=r-l;
                maxi=max(maxi,h[r]*dist1);
                r--;
            }
            // else{
            //     int dist1=r-l;
            //     maxi=max(maxi,h[l]*dist1);
            //     r--;
            //     l++;
            // }
        }
        return maxi;
    }
};