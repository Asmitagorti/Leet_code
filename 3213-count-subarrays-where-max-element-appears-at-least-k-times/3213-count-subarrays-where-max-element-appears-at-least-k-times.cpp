class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int max=-1,ct=0;
        for(int i=0;i<n;++i){
            if(nums[i]>max) max=nums[i];
        }
        map<int,int>freq;
        for(auto i:nums) freq[i]++;
        if(freq[max]<k) return 0;
        int left=0,right=0;
        long long res=0; // rendu pointers
        while(right<n){
            if(nums[right]==max){
                ct++;
            }
            while(ct>=k){ // end ish
                if(nums[left]==max){
                    ct--; // atleast
                }
                left++;
                res+=n-right;
            }
            right++;

        }
        return res;
        

    }
};