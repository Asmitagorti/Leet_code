class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int o=0,e=0;
        for(auto i:nums1){
            if(i%2==1) o++;
            else e++;
        }
        if(e==n || o==n) return true;
        int mini=INT_MAX;
        for(auto i:nums1){
            if(i%2==1) mini=min(mini,i);
        }
        for(auto i:nums1){
            if(i%2==0 && i-mini<1) return false;
        }
        return true;
    }
};