class Solution {
public:
    void sortColors(vector<int>& nums) {
        // 0-red, 1->white,2->blue
        // simple sort function
        int n=nums.size();
        int temp=0;
        for(int i=0;i<n-1;++i){
            for(int j=0;j<n-i-1;++j){
                if(nums[j]>nums[j+1]){
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
    }
};