class Solution {
public:
typedef long long ll;
    long long maximumTripletValue(vector<int>& nums) {
        ll x=nums[0],y=0,z=0;
        int n=nums.size();
        for(ll i=1;i<n-1;++i){
            x=max(x,ll(nums[i]));
            // cout<<x<<endl;
            y=max(y,x-ll(nums[i]));
            // cout<<y<<endl;
            z=max(z,y*ll(nums[i+1]));
            // cout<<z<<endl;
        }
        return z;
    }
};