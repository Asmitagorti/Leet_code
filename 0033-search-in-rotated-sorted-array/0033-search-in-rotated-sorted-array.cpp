class Solution {
public:
    int bin_search(vector<int>&nums, int l, int h, int target){
        while(l<=h){
            int mid=l+(h-l)/2;
            cout<<"l is "<<l<<" mid is "<<mid<<" h is "<<h<<endl;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target) l=mid+1;
            else h=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l=0,h=0,maxi=0,n=nums.size(),idx=0;
        int res=0;
        // from max->n, ct--> number of rotations
        // we need to check if the target is in the first k numbers sorted nums.
        for(int i=0;i<n;i++) {
            if(nums[i]>maxi){
                maxi=nums[i];
                idx=i; // remove
            }
        }
        // int val=n-idx-1;
        cout<<idx<<endl;
        if(target>=nums[0]){
            res=bin_search(nums,0,idx,target);
        }
        else {
            res=bin_search(nums,idx+1,n-1,target);
        }
        return res;
    }
};