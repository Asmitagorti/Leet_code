class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n=happiness.size();
        sort(happiness.rbegin(),happiness.rend());
        long long sum=0;
        // 2 3 4 5, k=1
        // 5 4 3 2, k=1
        for(int i=0;i<k;++i){
            cout<<happiness[i]<<" ";
            sum+=max(0,happiness[i]-i);
        }
        return sum;
    }
};