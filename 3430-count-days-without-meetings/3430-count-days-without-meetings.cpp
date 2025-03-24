class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        map<int,int>hi;
        int occ=0;
        for(auto &i:meetings){
            hi[i[0]]=max(hi[i[0]], i[1]); // assigns maax end values to map hi
            // keys are automatically sorted in asc order
        }
        int prev_end=-1, prev_start=-1, ct=0;
        for(auto &[cur_start, cur_end]: hi){
            if(prev_start==-1){
                prev_start=cur_start;
                prev_end=cur_end;
            }
            else if(prev_end>=cur_start){
                prev_end=max(prev_end, cur_end);
            }
            else{
                occ+=(prev_end-prev_start+1);
                prev_start=cur_start;
                prev_end=cur_end;
                
            }
        }
        if(prev_start!=-1) occ+=(prev_end-prev_start+1);
        return days-occ;
    }
};