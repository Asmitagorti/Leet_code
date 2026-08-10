class Solution {
public:
    int bin_search(vector<int>&nums,int l, int h,int n){
        while(l<=h){
            int mid=l+(h-l)/2;
            if(mid-1>=0 && mid+1<n){
                if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
                    return mid;
                }
                else if(nums[mid]<nums[mid+1]){
                    l=mid+1;
                }
                else if(nums[mid]<nums[mid-1]){
                    h=mid-1;
                }
            }
            else if(mid==0){
                if(nums.size()==1) return 0;
                else if(nums.size()>=2 && nums[0]>nums[1]) return 0;
                else l=mid+1;
            }
            else if(mid==n-1){
                if(nums.size()>=2 && nums[n-1]>nums[n-2]) return n-1;
                else h=mid-1;
            }
        }
        return -1;
    }
    int findPeakElement(vector<int>& nums) {
        // 2 bin search calls
        int n=nums.size();
        int res=bin_search(nums,0,n-1,n);
        return res;
    }
};