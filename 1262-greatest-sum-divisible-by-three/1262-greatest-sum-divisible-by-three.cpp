class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> arr(3,0);
        
        for(int i =0;i < nums.size();i++){
            int n1 = arr[0] + nums[i];
            int n2 = arr[1] + nums[i];
            int n3 = arr[2] + nums[i];
            arr[n1%3] = (arr[n1%3] > n1 ? arr[n1%3] : n1);
            arr[n2%3] = (arr[n2%3] > n2 ? arr[n2%3] : n2);
            arr[n3%3] = (arr[n3%3] > n3 ? arr[n3%3] : n3);
        }
        
        return arr[0];
    }
};