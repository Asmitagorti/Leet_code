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
        // cur_start =
            if(prev_start==-1) {// for the 1st iteration..
                prev_start=cur_start;
                prev_end=cur_end;
            }
            else if(prev_end>=cur_start){
                prev_end=max(prev_end,cur_end);

            }
            else{
                merged.push_back({prev_start,prev_end});
                prev_start=cur_start;
                prev_end=cur_end;
            }
        }
        merged.push_back({prev_start,prev_end});
        return merged;
    }
};