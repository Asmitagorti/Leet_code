class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;++i){
            if(nums[i]<k){
                return -1; // handles the -1 o/p
            }
        }
        int ct=0;
        int flag=1;
        sort(nums.begin(), nums.end()); //ascd order
        for(int i=0;i<n;++i){
            if(nums[i]!=k){
                flag=0;
                break;
            }
        }
        if(flag) return 0;
        ct=0;
        int prev=-1;
        for(int j=0;j<n;++j){
            if(nums[j]>k && nums[j]!=prev){
                ct++;
                prev=nums[j];
            }
        }

        // cout<<ct<<endl;
        return (ct);
    }
};