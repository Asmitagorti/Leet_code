class Solution {
public:
    int count(int n){
        int s=0;
        while(n!=0){
            s++;
            n/=10;
        }
        return s;
    }
    int sym(int n){
        int ct=count(n);
        if(ct%2!=0) return 0;
        int mid=ct/2;
        int s1=0,s2=0;
        while(ct!=mid && n>0){
            s1+=(n%10);
            n/=10;
            ct--;
        }
        while(ct!=0 && n>0){
            s2+=(n%10);
            n/=10;
            ct--;
        }
        if(s1==s2) return 1;
        else return 0;
    }
    int countSymmetricIntegers(int low, int high) {
        int ct=0;
        for(int i=low;i<=high;++i){
            if(sym(i)){
                ct++;
            }
        }
        return ct;
    }
};