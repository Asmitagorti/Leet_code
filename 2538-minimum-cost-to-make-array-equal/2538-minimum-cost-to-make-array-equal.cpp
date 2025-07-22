class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        // sum of all the elements. size --> val u need to make equal
        // but just the average of nums, doesnt work
        // cuz we also need to take acc of the costs
        // so we write the weighte average
        // which is basically where, u write nums[i], as many times as its respective cost is
        // nums = [1,3,5,2], cost = [2,3,1,14]
        // arr[]= {1,1,3,3,3,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
        // we find the av here, the av we find now, shld be the no we change nums[i] too
        // obv we cant construct this new arr, cuz the worst case for each is 10^6
        long long sum=0;
        long long n=nums.size();
        for(int i=0;i<n;++i){
            sum+=cost[i];
        }
        // cout<<"sum is "<<sum<<endl;
        long long res=0;
        map<long long, long long>freq;
        for(int i=0;i<n;++i){
            freq[nums[i]]+=cost[i]; // key , value, asc order, accumluate the repeated data
        }
        long long half=(sum+1)/2;
        long long acc=0;
        long long flag=0;
        for(auto i:freq){
            acc+=i.second;
            if(acc>=half){
                flag=i.first;
                break;
            }
        }
        // flag now has the nums[i] value, which is the req weighted median
        // now i need to change all the numsi] values to flag
        long long s=0;
        for(auto i:freq){
            long long z=abs(i.first-flag);
            s+=(z*i.second);
        }
        return s;
    }
};
