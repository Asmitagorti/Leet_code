class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int ind=1;
        vector<int>lp(n),rp(n);
        lp[0]=nums[0];
        for(int i=1;i<n;++i){
            lp[i]=nums[i]+lp[i-1];
        }
        // for(auto i:lp) cout<<i<<" ";
        // cout<<endl;
        rp[n-1]=nums[n-1];
        for(int i=n-2;i>=0;--i){
            rp[i]=nums[i]+rp[i+1];
        }
        // for(auto i:rp) cout<<i<<" ";
        // cout<<endl;
        for(int i=0;i<lp.size();++i){
            if(lp[i]==rp[i]) return i;
        }

        return -1;
    }
};