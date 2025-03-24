class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        map<int, int > hi; // okay, create that map that holds the MAX end values for each element ( start)
        for(auto &i:intervals){
            hi[i[0]]=max(hi[i[0]],i[1]); // finds the max end values
            // ex : {2,5},{2,6},{2,4}
            // it returns {2->6}
        }
        int prev_end=-1, prev_start=-1;
        vector<vector<int>>merged;
        for(auto &[cur_start,cur_end]:hi){ // removes the unecessary copying
            if(prev_start==-1) {// for the 1st iteration..
                prev_start=cur_start;
                prev_end=cur_end;
            }
            else if(prev_end>=cur_start){
                prev_end=max(prev_end,cur_end);
                // for {1,3},{2,6}
                // 3 is >= 2, so 2 belongs within its range
                // so for the key prev_start, the value is max(3,6), which is 6
                // so finally its: {1->6};
            }
            else{
                merged.push_back({prev_start,prev_end});
                prev_start=cur_start;
                prev_end=cur_end;
                // if there is the values dont fall into another range
                // we store the previous pair into merged
                // and then re assign prev_start, and prev_end
            }
        }
        merged.push_back({prev_start,prev_end});
        // we push the last pairs into merged
        return merged;
    }
};