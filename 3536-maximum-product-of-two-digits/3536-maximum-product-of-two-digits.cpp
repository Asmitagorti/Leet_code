class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        int ori=n;
        while(ori!=0){
            int dig = ori%10;
            arr.push_back(dig);
            ori/=10;
        }
        sort(arr.begin(),arr.end());
        int m=arr.size();
        return arr[m-1]*arr[m-2];
        
    }
};