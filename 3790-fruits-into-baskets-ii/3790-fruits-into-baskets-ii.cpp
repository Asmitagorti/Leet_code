class Solution {
public:
    // int bin_search(int x, vector<int>&baskets, vector<int>&vis){
    //     int n=baskets.size();
    //     int low=0, high=n-1;
    //     int res=-1;
    //     while(low<=high){
    //         int mid = (low+high)/2;
    //         if(baskets[mid]>x && vis[mid]==0){
    //             res=mid;
    //             high=mid-1; // try for a beter option
    //         }
    //         else {
    //             low=mid+1;
    //         }
    //     }
    //     return res;
    // }
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n= fruits.size();
        int ct=0;
        // int key=0;
        // sort(baskets.begin(), baskets.end());
        // cant sort, -> cuz it ruins the order :: leftmost available basket
        vector<int>vis(n,0);
        for(int i=0;i<n;++i){
            // int key = bin_search(fruits[i],baskets,vis); //index
            for(int j=0;j<n;++j){
                if(vis[j]==0 && baskets[j]>=fruits[i]){
                // cout<<"fruits[i] is"<<fruits[i]<<"key is:"<<key<<endl;
                vis[j]=1;
                ct++;
                break;
            }
            }
        }
        cout<<ct<<endl;
        return (n-ct);
    }
};