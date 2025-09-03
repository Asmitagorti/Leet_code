class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int>arr;
        if(n%2==1) return {};
        map<int,int>m;
        sort(changed.begin(),changed.end());
        for(auto i:changed){
            m[i]++;
        }
        for(int i=0;i<n;++i){
            if(m[changed[i]]==0) continue;
            if(m[changed[i]*2]==0) return {};
            arr.push_back(changed[i]);
            m[changed[i]]--;
            m[changed[i]*2]--;
        }
        return arr;

    }
};