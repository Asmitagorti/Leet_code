class Solution {
public:
    string find(int k,string s){
        string fin = "";
        string res="";
        while(fin.size()<k){
            res="";
            for(auto i: s){
                res+=char(i+1);
            }
            fin=s+res;
            s=fin;
        }
        return fin;
    }
    char kthCharacter(int k) {
        // recursion?
        // a, a_b, ab_bc, abbc_bccd
        // until word.size()>=k
        string hi = find(k,"a");
        // cout<<hi<<endl;
        char ch;
        for(int i=0;i<hi.size();++i){
            if(i==k-1) ch=hi[i];
        }
        return ch;
    }
};