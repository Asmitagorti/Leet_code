class Solution {
public:
    int findLHS(vector<int>& nums) {
        // find map of nums
        // add the top 2 freq
        // int flag=1;
        // for(int i=0;i<nums.size()-1;++i){
        //     if(abs(nums[i+1]-nums[i])!=1){
        //         flag=0;
        //     }
        //     else flag=1;
        // }
        // if(flag==0) return 0;
        int p1=0,p2=1;
        int ct=0,min=0;
        sort(nums.begin(),nums.end());
        int max_ct=0;
        while(p2<nums.size()){
            int z=(nums[p2]-nums[p1]);
            // if(min==max) ct=0;
            if(z==0){
                p2++;
            }
            else if(z==1){
                ct=max(ct,p2-p1+1);
                p2++;
            }
            else{
                p1++;
            }
        }
        return ct;



        
    }
};