class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        map<int,int>m;
        vector<int>res,v1,v2;
        int x1=1,y1=1;
        while(x1<=bound){
            v1.push_back(x1);
            x1*=x;
            if(x1==1) break;
        }
        while(y1<=bound){
            v2.push_back(y1);
            y1*=y;
            if(y1==1) break;
        }
        for(int i=0;i<v1.size();++i){
            for(int j=0;j<v2.size();++j){
                long long val=v1[i]+v2[j];
                if(val<=bound && m[val]==0) {
                    m[val]=1;
                    res.push_back(val);
                }
            }
        }
        return res;
    }
};