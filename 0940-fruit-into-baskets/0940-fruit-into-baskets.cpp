class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // longest contiguous array with 2 distinct elements
        int n = fruits.size();
        int m = INT_MIN;
        int l=0,r=0;
        map<int,int>s;
        while(r<n){
           s[fruits[r]]++;
           while(s.size()>2){
            // for(auto i:s){
            //     cout<<i.first<<" ";
            // }
            // cout<<endl;
                s[fruits[l]]--;
            if(s[fruits[l]]==0) s.erase(fruits[l]);
            l++;
            // if(l<n) {
            //     l++;
            //     // s[fruits[l]]++;
            //     // remove fruits[l] from set
            // }
           }
           m = max(m, r-l+1);
           r++;
        }
        return m;
    }
};