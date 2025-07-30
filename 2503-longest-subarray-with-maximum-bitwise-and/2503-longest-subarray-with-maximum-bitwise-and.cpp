class Solution {
public:
    vector<pair<int,int>>m (vector<int> & nums){
        int ct=1,flag=0;
        // int l=0,r=1;
        int n=nums.size();
        vector<pair<int,int>>hi;
        // hi.push_back(make_pair(nums[0],ct));
        for(int i=1;i<n;++i){
            if(nums[i-1]==nums[i]){
                ct++;
            }
            else{
                hi.push_back(make_pair(nums[i-1],ct));
                ct=1;
            } 
            // l++;
            // r++;
            // continue;
        }
        hi.push_back(make_pair(nums[n-1],ct));
        return hi;
    }
    int longestSubarray(vector<int>& nums) {
        // find the len of the longest consec no
        // cuz bitwise and of the smae number is the same no
        // 1 2 1 1 1 1 0 3
        // retunrn val of max individual keys
        int M=INT_MIN;
        for(auto i : nums){
            if(i>M) M = i;
        }
        cout<<" max is "<<M<<endl;
        auto hi = m(nums);
        int c=0;
        for(auto i : hi){
            cout<<i.first<<" "<<i.second<<endl;
            if(i.first==M) {
                cout<<" max is "<<M<<endl;
                c=max(c,i.second);
                // break;
            }
            // continue;
        }
        return c;

    }
};