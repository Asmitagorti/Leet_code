class Solution {
public:
    int eve(int n){
        int ct=0;
        while(n>0){
            int d=n%10;
            ct++;
            n/=10;
        }
        return ct;
    }
    int findNumbers(vector<int>& nums) {
        int n=nums.size(),res=0;
        for(int i=0;i<n;++i){
            if(eve(nums[i])%2==0) res++;
        }
        return res;
    }
};