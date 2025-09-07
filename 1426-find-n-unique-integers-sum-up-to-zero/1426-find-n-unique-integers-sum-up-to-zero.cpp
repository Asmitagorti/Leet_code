class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        if(n%2==0){
            int ct=0;
            for(int i=1;i<n && ct!=n;++i){
                v.push_back(i);
                v.push_back(-i);
                ct+=2;
            }
        }
        else{
            v.push_back(0);
            int ct=1;
            // int l=v.size();
            for(int i=1;i<n && ct!=n;++i){
                v.push_back(i);
                v.push_back(-i);
                ct+=2;
            }
        }
        return v;
    }
};