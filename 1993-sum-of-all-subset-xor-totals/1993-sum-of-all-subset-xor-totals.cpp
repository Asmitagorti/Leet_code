class Solution {
public:
    void call(int ind, int Xor, vector<int>& nums, int &res){
        if(ind==nums.size()){
            res+=Xor; // final val
            return ;
        }
        call(ind+1,Xor,nums,res); // non pick
        call(ind+1,Xor^nums[ind],nums,res); // pick! 
    }
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        call(0,0,nums,res);
        return res;
    }

};