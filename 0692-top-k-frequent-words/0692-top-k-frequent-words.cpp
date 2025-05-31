class Solution {
public:
    void sort(vector<pair<string,int>>&hi){
        // sort acc to freq here
        int n=hi.size();
        for(int i=0;i<n-1;++i){
            for(int j=0;j<n-i-1;++j){
                if(hi[j+1].second>hi[j].second){
                    swap(hi[j],hi[j+1]);
                }
            }
            // bubble sort
        }
    }
    void call(vector<pair<string,int>>&hi){
        // sort acc to string : lexicographically..., same freq
        int n=hi.size();
        for(int i=0;i<n-1;++i){
            for(int j=0;j<n-i-1;++j){
                if(hi[j+1].first<hi[j].first){
                    swap(hi[j],hi[j+1]);
                }
            }
            // bubble sort
        }
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>pup;
        int n=words.size();
        for(int i=0;i<n;++i){
           pup[words[i]]++;
        }
        vector<pair<string,int>>hi(pup.begin(), pup.end());
        // freq: highest ->lowest
        // words: ascending order: lexicographically
        vector<string>arr;
        call(hi);
        sort(hi);

        int ct=0;
        
        for(auto x:hi){
            arr.push_back(x.first);
            ct++;
            if(ct==k) break;
        }
        return arr;
    }
};