class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // find the index where nums1[i] == nums2[j]
        // and then check from that index+1, and then find the first greater element
        // add this to the return array
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>res;
        for(auto i: nums1){
            int index=-1;
            for(int j=0;j<n2;++j){
                if(nums2[j]==i){
                    index=j; //store index
                    break;
                }
            }
            int next=-1;
            for(int k=index+1;k<n2;++k){
                if(nums2[k]>i){
                    next=nums2[k];
                    break;
                }
            }
            res.push_back(next);///enter values
        }
        return res;
    }
};