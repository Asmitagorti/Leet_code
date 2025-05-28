class Solution {
public:
    bool judgeSquareSum(int c) {
        // till 2* 10^9
        // bit-wise
        // manipulate c expression
        // c: powers of 2 || sum of 2 distinct powers of 2
        int half=sqrt(c);
        int flag=0;
        for(int i=0;i<=half;++i){
            int z=i*i;
            int hi=c-(z);
            int y=sqrt(hi);
            if(y*y==hi) flag=1;
        }
        return (flag==1)?true:false;
    }
};