class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        for(int i=0;i<n;++i){
            int flag=0;
            for(int j=0;j<nums[i];++j){
                int val=j | j+1;
                if(val==nums[i]){
                    flag=1;
                    arr.push_back(j);
                    break;
                }
            }
            if(flag==0) arr.push_back(-1);
        }
        return arr;
    }
};