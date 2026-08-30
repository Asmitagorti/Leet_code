class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>lb(prices.size(),0),rb(prices.size(),0);
        int mini=INT_MAX,maxi=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini) {
                mini=prices[i];
            }
            else{
                lb[i]=max(prices[i]-mini,lb[i-1]);
            }
        }
        for(int i=prices.size()-1;i>=0;i--){
            if(prices[i]>maxi) {
                maxi=prices[i];
            }
            if(i == prices.size()-1) rb[i] = 0;
            else{
                rb[i]=max(maxi-prices[i],rb[i+1]);
            }
        }
        // reverse(rb.begin(),rb.end());
        int ans = lb.back();
        // for(auto i:lb) cout<<i<<" ";
        // cout<<endl;
        // for(auto i:rb) cout<<i<<" ";
        // cout<<endl;
        for(int i=1;i<rb.size();i++){
            ans=max(ans,rb[i]+lb[i-1]);
        }
        return ans;
    }
};