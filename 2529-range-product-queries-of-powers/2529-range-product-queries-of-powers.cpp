class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        int sum=0;
        int m= queries.size();
        vector<int>powers;
        vector<int>y;
        // powers.push_back(p);
        int x =n;
        while(x>0){
            if((x&(x-1))==0) {
                powers.push_back(x);
                x-=x;
            }
            else{
                int p=1;
                while(p*2<x) p*=2;
                powers.push_back(p);
                x-=p;
            }
        }
        reverse(powers.begin(), powers.end());
        // for(int i=0;i<powers.size();++i){
        //     cout<<powers[i]<<" ";
        // }
        for(int i=0;i<m;++i){
            long long prod=1;
            for(int j=queries[i][0];j<=queries[i][1];++j){
                prod=(prod*powers[j])%1000000007;
            }
            y.push_back((int)prod);
        }
        return y;
    }
};