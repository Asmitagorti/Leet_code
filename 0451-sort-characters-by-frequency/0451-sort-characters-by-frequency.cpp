class Solution {
public:
    string frequencySort(string s) {
        // most frequent first
        unordered_map<char,int>hi;
        for(auto i: s){
            hi[i]++;
            // cout<<i<<" "<<hi[i]<<" "<<endl;
        }
        auto kitty=[](auto &a, auto &b){
            return a.second>b.second;
        };

        // e:2, r:1, t:1
        vector<pair<char,int>>pup(hi.begin(),hi.end());
        // sort(pup.begin(), pup.end()); // sorts lexicographically
        sort(pup.begin(), pup.end(),kitty);

        string res;
        for(auto i: pup){
            for(int j=0;j<i.second;++j){
                res.push_back(i.first);
            }
        }
        return res;
    }
};