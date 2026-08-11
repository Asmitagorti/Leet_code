class Solution {
public:
    int bin_search1(vector<int>&nums, int l, int h, int &target){
        int mid=0;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]<target){
                l=mid+1;
            }
            else if(nums[mid]>=target) h=mid-1;
        }
        cout<<"l is "<<l<<"m is "<<mid<<"h is "<<l<<endl;
        return (nums.size()>=1 && l<nums.size() && nums[l]==target)?l:-1;
    }
    int bin_search2(vector<int>&nums, int l, int h, int &target){
        int mid=0;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]<=target){
                l=mid+1;
            }
            else if(nums[mid]>target) h=mid-1;
        }
        cout<<"l is "<<l<<"m is "<<mid<<"h is "<<h<<endl;
        // cout<<nums[mid]<<target<<endl;
        return (nums.size()>=1 && h<nums.size() && nums[h]==target)?h:-1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==target) return {0,0};
            else return {-1,-1};
        }
        vector<int>v(2,-1);
        int start=bin_search1(nums,0,n-1,target);
        int end=bin_search2(nums,0,n-1,target);
        v[0]=start;
        v[1]=end;
        return v;
    }
};