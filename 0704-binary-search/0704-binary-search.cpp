class Solution {
public:
    int check(vector<int>&nums, int l, int h, int target){
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) l=mid+1;
            else h=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int res=check(nums,0,n-1,target);
        return res;
    }
};