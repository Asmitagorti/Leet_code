class Solution {
public:
    int call(vector<int>&points){
        int ans=1;
        for(int i=0;i<2;++i){
            ans=points[0]*points[0] + points[1]*points[1];
        }
        return ans;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // store the distances, in an array ,sort it
        // return just k of them
        // if (sqrt a)< (sqrt b), then a<b
        // i want to take a map: for the points and index
        multimap<int,int>hi;
        int n=points.size();
        for(int i=0;i<n;++i){
            hi.insert({call(points[i]),i});
            // dist and index
        }
        // sort based on hi.first
        // return only the first k ones
        // take a new vector<vector>int>>ans
        // and add the first k
        // and then return that
        vector<vector<int>>ans;
        int ct=0;
        for(auto pup: hi){
            ans.push_back(points[pup.second]);
            ct++;
            if(ct==k) break;
        }
        return ans;
    }
};