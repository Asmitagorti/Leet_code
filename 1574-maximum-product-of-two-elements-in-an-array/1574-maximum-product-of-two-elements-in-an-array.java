class Solution {
    public int maxProduct(int[] nums) {
        int len=nums.length;
        int max=-10000;
        for(int i=0;i<len;++i){
            for(int j=i+1;j<len;++j){
                int one=nums[i]-1;
                int two=nums[j]-1;
                if(one*two>max) max=one*two;
            }
        }
        return max;
    }
}