class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi=0;
        int ct=0;
        map<int,int>freq;
        for(auto i:nums){
            freq[i]++;
            if(maxi<freq[i]) maxi=freq[i];
        }
        for(auto i:freq){
            if(i.second==maxi){
                ct+=i.second;
                continue;
            }
        }
        return ct;

    }
};