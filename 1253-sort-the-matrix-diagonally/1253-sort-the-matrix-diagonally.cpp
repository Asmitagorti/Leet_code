class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<m;++i){
            int start=0,j=i;
            vector<int>diag;
            while(start!=n && j!=m){
                diag.push_back(mat[start++][j++]);
                // start++;j++;
            }
            sort(diag.begin(), diag.end());
            start=0,j=i;
            int k=0;
            while(start!=n && j!=m){
                mat[start++][j++]=diag[k++];
            }
        }
        for(int i1=0;i1<n;++i1){
            int s1=i1,j1=0;
            vector<int>diag1;
            while(s1!=n && j1!=m){
                diag1.push_back(mat[s1++][j1++]);
                // s1++;j1++;
            }
            sort(diag1.begin(), diag1.end());
            s1=i1,j1=0;
            int k1=0;
            while(s1!=n && j1!=m){
                mat[s1++][j1++]=diag1[k1++];
            }
        }
        return mat;
    }
};