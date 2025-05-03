class Solution {
public:
    string pushDominoes(string dominoes) {
        // return "";
        // cases:
        // RL ==> no change
        // R.L ==> no change
        // R..L ==> RRLL balance
        // R...L ==> RR.LL balance
        // so no matter how many n : ... in btw an R and L
        // its balanced, and we get n-2 .'s
        // if its just one R, or just one L, change is made to adjacent
        // 2 pointers -> indeces!!!!!!!!!!!
        int n=dominoes.size();
        int i=0;
        string fin=dominoes;
        while(i<n && fin[i]=='.') i++;
        if(i<n && fin[i]=='L'){
            for(int k=0;k<i;++k){
            fin[k]='L';
                }
        }
        // u have the first non-dot index
        for(int j=i+1;j<n;++j){
            if(fin[j]!='.'){

                if(fin[j]=='L' && fin[i]=='L'){
                    for(int k=i+1;k<j;++k){
                        fin[k]='L';
                    }
                }
                else if(fin[j]=='R' && fin[i]=='R'){
                    for(int k=i+1;k<j;++k){
                        fin[k]='R';
                    }
                }
                else if(fin[j]=='L' && fin[i]=='R'){
                    int hi=i+1,bye=j-1;
                    while(hi<bye){
                        fin[hi++]='R';
                        fin[bye--]='L';
                    }
                }
                i=j;
            }
        }
        if(i<n && fin[i]=='R'){
            for(int k=i+1;k<n;++k){
                fin[k]='R';
            }
        }
        return fin;
    }
};