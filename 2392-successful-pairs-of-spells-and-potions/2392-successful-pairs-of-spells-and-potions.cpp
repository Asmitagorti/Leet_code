class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // cant do nested, tle
        int n=spells.size();
        int y=potions.size();
        vector<int>res;
        // sort(spells.begin(),spells.end());
        sort(potions.begin(),potions.end());
        // spells[i] * positions[j] > success
        // positions[j] > success/spells[i]
        // 5 > 5/7
        // 5 5 8
        for(int i=0;i<n;++i){
            int hi = lower_bound(potions.begin(), potions.end(),(double)ceil((double)success / spells[i])) - potions.begin();
            if(hi==y) res.push_back(0);
            else res.push_back(y-hi);
            // res.push_back(n-hi+1);
            // cout<<"ceil value "<<(int)(ceil(success / spells[i]))<<endl;
        }
        return res;
        
    }
};