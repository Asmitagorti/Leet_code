class Solution {
public:
// here we have 2 options, we can skip, or solve
// first time using dp!!
// without dp, we recursively find the values of already computed values
// dp, stores the values, and if we need it, it returns that value
    vector<long long>dp;
    long long call(int i, vector<vector<int>>& questions) {
        if (i >= questions.size()) return 0; 
        if(dp[i]!=-1) return dp[i]; // returns computed value
        long long skip = call(i + 1, questions);
        long long next = questions[i][1]+i + 1;
        long long solve= questions[i][0] + call(next, questions);
        return dp[i] =max(skip, solve); // stores value in dp table
    }
    long long mostPoints(vector<vector<int>>& questions) {
        dp.assign(questions.size(),-1); // initalise table with -1
        return call(0, questions);
    }
};
