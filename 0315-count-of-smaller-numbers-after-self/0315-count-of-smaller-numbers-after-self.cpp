class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int>sorted;
        vector<int>res;
        int n=nums.size();
        // so basically, we cant keep comparing each element with the one on its right
        // cuz of the big boy contrainsts :))
        // o(1)*o(log(n-1)) + o(2)*o(log(n-2)) + .... o(n)*o(log(1)) , last one is 0
        // to time complexity --> o(n*logn) --> can do, binary search
        int i=n-1;
        while(i>=0){
            // u need to send the array(fin) to search, from i -> n
            // i need the binary search to return all the smallest elements, < nums(i)
            // or i can make the binary search return the index of the largest smaller number < nums(i) --> j
            // and the no of smaller elements, is (j-i+1), push back to res
            // o(n)*[o(nlogn)*o(logn)] --> o(n^2), too much
            // think greedily, i'll start from the back of the array
            // the last element will always have 0 as the answer
            // sooo, you still have to check from there, bin search
            // and to use bin search, u need to sort the arr
            // i was trying to use prefix sum... but u need to do lots of comparisons
            // what if the bin search happens in an array thats sorted, so we dont have to sort each time
            // we insert elements we've already crossed, into the arr in a sorted order, and do bin search in that
            auto it=lower_bound(sorted.begin(), sorted.end(), nums[i]);
            // 'it' is an iteraotr, so it jsut points to that index
            // to get the index, we need to subtract the iterator with the first index
            res.push_back(it-sorted.begin());
            sorted.insert(it,nums[i]);
            i--;
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};