class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int m1=0,m2=0,a=0,d1=0;
        int flag=0;
        int a2=0;
        int i1=0,i2=0;  
        for(int i=0;i<dimensions.size();++i){
            int l = dimensions[i][0];
            int w = dimensions[i][1];
            d1=(l*l)+(w*w);
            a=l*w;
            if(d1>m2 || (a>m1 && d1==m2)){
                m1=a;
                if(d1>=m2){
                    m2=d1;
                    a=l*w;
                }
            }
        }
        return m1;
    }
};
// 109, 106, 73

// 100+9
// 25+81
// 64+9
