class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>&in) {
        // [[1,2],[1,3],[2,3],[3,4]]
        // [[1,100],[11,22],[1,11],[2,12]]
        // [[1,11],[1,100],[2,12],[11,22]]
        // sort(in.begin(),in.end());
        sort(in.begin(),in.end(),[](const vector<int>& a, const vector<int>& b){
            return a[1]<b[1];
        });
        for(int i=0;i<in.size();i++){
            for(int j=0;j<in[i].size();j++) cout<<in[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
        int ct=0;
        int prev=in[0][1];
        for(int i=1;i<in.size();i++){
            // cout<<in[i][1]<<" "<<in[i+1][0]<<endl;
            if(in[i][0]<prev) ct++;
            else prev=in[i][1];

        }
        return ct;
    }
};