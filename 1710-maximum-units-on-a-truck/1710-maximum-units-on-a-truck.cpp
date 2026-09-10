class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int res=0;
        int n=boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),[](const auto& a, const auto& b){
            return a[1]>b[1];
        });
        // for(auto i:boxTypes) cout<<i[0]<<" ";
        for(int i=0;i<n;i++){
            int take=min(boxTypes[i][0],truckSize);
            truckSize-=take;
            res+=(take*boxTypes[i][1]);
            if(truckSize==0) break;
        }
        return res;
    }
};