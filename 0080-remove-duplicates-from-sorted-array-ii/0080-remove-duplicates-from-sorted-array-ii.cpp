class Solution {
public:
    // int remove(vector<int>& nums,int n){
    //     int size=0;
    //     vector<int>arr;
    //     for(int i=0;i<n;++i){
            
    //     }
    // }
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        map<int, int> freq;
        for (auto puppy : nums) {
            freq[puppy]++;
        }
        int ct = 0;
        vector<int>arr;
        for(auto hi:freq){
            if(hi.second>=2){
                arr.push_back(hi.first);
                arr.push_back(hi.first);
            }
            else arr.push_back(hi.first);
        }
        for(int i=0;i<arr.size();++i){
            // cout<<arr[i]<<" ";
            nums[i]=arr[i];
        }
        // this creates a space complexity of O(n)
        return arr.size();
    }
};