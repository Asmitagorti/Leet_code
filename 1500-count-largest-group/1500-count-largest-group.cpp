class Solution {
public:
    int sum(int n){
        int s=0;
        while(n>0){
            s+=(n%10);
            n/=10;
        }
        return s;
    }
    int countLargestGroup(int n) {
        // 1 <= n <= 10^4
        // find the NUMBER of such large groups
        unordered_map<int,int>freq;
        for(int i=1;i<=n;++i){
            freq[sum(i)]++;
        }
        int max=INT_MIN;
        for(auto hi:freq){
            if(hi.second>max) max=hi.second;
        }
        int res=0;
        for(auto hii:freq){
            if(hii.second==max) res++;
        }
        return res;
    }
};