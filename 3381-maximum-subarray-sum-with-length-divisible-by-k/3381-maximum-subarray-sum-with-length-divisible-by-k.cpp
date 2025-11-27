class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        // brute force : o(n^2) -> create prefix array from each each eleement of size % by k
        // our solution -> create one prefix array, and alter the values,
        // to remove the exiting element, and the incoming element
        int n=nums.size();
        vector<long long>arr;
        long long sum=0;
        for(int i=0;i<k;++i){
            sum+=nums[i];
        }
        arr.push_back(sum);
        for(int i=k;i<n;++i){
            sum=sum-nums[i-k]+nums[i];
            arr.push_back(sum);
        }
        long long maxi=arr[0];
        // for(auto i:arr) cout<<i<<" ";
        for(int i=k;i<arr.size();++i){
            arr[i]=max(arr[i]+arr[i-k],arr[i]);
        }
        return *max_element(arr.begin(),arr.end());

    }
};