class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // if the array is in descneding order, return 0
        // vector<int> arr(prices.begin(),prices.end()); // adds space complexity : O(n)
        // reverse(arr.begin(), arr.end());
        // bool flag=false;
        // for(int i=0;i<arr.size();++i){
        //     if(arr[i]!=prices[i]){
        //         flag=true;
        //         break;
        //     }
        // }
        // if(!flag) return 0;
        int mi=INT_MAX;
        int ind=-1,in=-2;
        int bp=0;

        for(int i=0;i<prices.size();++i){
            int x=prices[i];
            if(x<mi) mi=min(mi,x);
            else{
                int profit=x-mi;
                if(profit>bp) bp=profit;
            }
        }
        return bp;
    }
};