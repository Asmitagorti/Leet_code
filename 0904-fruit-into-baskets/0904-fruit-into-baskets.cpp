class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int k=2;
        map<int,int>m;
        int l=0,r=0,maxi=0;
        // if(fruits.size()<=k) return fruits.size();
        while(r<n){
            m[fruits[r]]++;
            while(m.size()>k){
                m[fruits[l]]--;
                if(m[fruits[l]]==0) m.erase(fruits[l]);
                l++;
            }
            if(m.size()<=k){
                int len=r-l+1;
                maxi=max(maxi,len);
            }
            r++;
        }
        return maxi;
    }
};