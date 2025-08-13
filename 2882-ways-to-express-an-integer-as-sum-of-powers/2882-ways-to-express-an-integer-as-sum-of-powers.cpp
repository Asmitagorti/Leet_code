class Solution {
public:
// n = 10, x =2
// 1 4 9 -> arr

int dp[301][301];
//     index sum
// int i=0,j=0;
    int call(int start, int n, int size, vector<int>&arr){
        if(start==size){
            if(n==0 ) return 1;
            else return 0; //!!!
        }
        int p1=0,p2=0;
        if(dp[start][n]!=-1) return dp[start][n];
        if(arr[start]<=n) {
            p1 = call(start+1,n-arr[start],size,arr);
        }
        p2 = call(start+1,n,size,arr);

        return dp[start][n] =( (p1%1000000007)+(p2%1000000007))%1000000007;
    }
    int numberOfWays(int n, int x) {
        vector<int>arr;
        for(int i=1;i<=n;++i){
            int z = pow(i,x);
            if(z<=n) arr.push_back(z);
            else break;
        }
        int size = arr.size();
        // for(int i=0;i<arr.size();++i){
        //     cout<<arr[i]<<" ";
        // }
        memset(dp,-1,sizeof(dp));
        int res =call(0,n,size,arr);
        return res;

    }
};